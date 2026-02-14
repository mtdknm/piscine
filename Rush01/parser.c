#include "rush01.h"

static int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static void	fill_ctx(t_ctx *ctx, int v[16])
{
	int	i = 0;

	while (i < 4)
	{
		ctx->clue_top[i] = v[i];
		ctx->clue_bottom[i] = v[i + 4];
		ctx->clue_left[i] = v[i + 8];
		ctx->clue_right[i] = v[i + 12];
		i++;
	}
}

int	parse_clues(char *s, t_ctx *ctx)
{
	int	i = 0;
	int	k = 0;
	int	v[16];

	while (s[i] && k < 16)
	{
		while (is_space(s[i]))
			i++;
		if (s[i] < '1' || s[i] > '4')
			return (0);
		v[k++] = s[i++] - '0';
	}
	if (k != 16)
		return (0);
	fill_ctx(ctx, v);
	return (1);
}
