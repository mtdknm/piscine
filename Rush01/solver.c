#include "rush01.h"

void	print_grid(t_ctx *ctx);

static const int	g_perm[24][4] = {
	{1,2,3,4},{1,2,4,3},{1,3,2,4},{1,3,4,2},
	{1,4,2,3},{1,4,3,2},{2,1,3,4},{2,1,4,3},
	{2,3,1,4},{2,3,4,1},{2,4,1,3},{2,4,3,1},
	{3,1,2,4},{3,1,4,2},{3,2,1,4},{3,2,4,1},
	{3,4,1,2},{3,4,2,1},{4,1,2,3},{4,1,3,2},
	{4,2,1,3},{4,2,3,1},{4,3,1,2},{4,3,2,1}
};

static int	row_ok(t_ctx *ctx, int r, int p[4])
{
	if (visible_left(p[0],p[1],p[2],p[3]) != ctx->clue_left[r])
		return (0);
	if (visible_right(p[0],p[1],p[2],p[3]) != ctx->clue_right[r])
		return (0);
	return (1);
}

static int	col_no_dup(t_ctx *ctx, int r, int p[4])
{
	int	c = 0;
	int	i;

	while (c < 4)
	{
		i = 0;
		while (i < r)
		{
			if (ctx->grid[i][c] == p[c])
				return (0);
			i++;
		}
		c++;
	}
	return (1);
}

static int	cols_view_ok(t_ctx *ctx)
{
	int	c = 0;
	int	t;
	int	b;

	while (c < 4)
	{
		t = visible_left(ctx->grid[0][c],ctx->grid[1][c],
			ctx->grid[2][c],ctx->grid[3][c]);
		b = visible_right(ctx->grid[0][c],ctx->grid[1][c],
			ctx->grid[2][c],ctx->grid[3][c]);
		if (t != ctx->clue_top[c] || b != ctx->clue_bottom[c])
			return (0);
		c++;
	}
	return (1);
}

static void	set_row(t_ctx *ctx, int r, int p[4])
{
	ctx->grid[r][0]=p[0];
	ctx->grid[r][1]=p[1];
	ctx->grid[r][2]=p[2];
	ctx->grid[r][3]=p[3];
}

static void	backtrack(t_ctx *ctx, int r)
{
	int	i = 0;

	if (ctx->found)
		return ;
	if (r == 4)
	{
		if (cols_view_ok(ctx))
		{
			print_grid(ctx);
			ctx->found = 1;
		}
		return ;
	}
	while (i < 24)
	{
		if (row_ok(ctx,r,(int*)g_perm[i])
			&& col_no_dup(ctx,r,(int*)g_perm[i]))
		{
			set_row(ctx,r,(int*)g_perm[i]);
			backtrack(ctx,r+1);
		}
		i++;
	}
}

int	solve(t_ctx *ctx)
{
	ctx->found = 0;
	backtrack(ctx,0);
	return (ctx->found);
}
