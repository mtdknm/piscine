#include "rush01.h"

static void	write_line(int row[4])
{
	char	out[8];

	out[0] = row[0] + '0';
	out[1] = ' ';
	out[2] = row[1] + '0';
	out[3] = ' ';
	out[4] = row[2] + '0';
	out[5] = ' ';
	out[6] = row[3] + '0';
	out[7] = '\n';
	write(1, out, 8);
}

void	print_grid(t_ctx *ctx)
{
	write_line(ctx->grid[0]);
	write_line(ctx->grid[1]);
	write_line(ctx->grid[2]);
	write_line(ctx->grid[3]);
}
