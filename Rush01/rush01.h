#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>

typedef struct s_ctx
{
	int	grid[4][4];
	int	clue_top[4];
	int	clue_bottom[4];
	int	clue_left[4];
	int	clue_right[4];
	int	found;
}	t_ctx;

void	ft_putstr(char *s);
int		parse_clues(char *s, t_ctx *ctx);

int		visible_left(int a, int b, int c, int d);
int		visible_right(int a, int b, int c, int d);

int		solve(t_ctx *ctx);

#endif
