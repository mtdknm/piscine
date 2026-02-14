#include "rush01.h"

void	ft_putstr(char *s)
{
	int	i = 0;
	while (s[i])
		i++;
	write(1, s, i);
}

int	visible_left(int a, int b, int c, int d)
{
	int	max = 0;
	int	cnt = 0;

	if (a > max) { max = a; cnt++; }
	if (b > max) { max = b; cnt++; }
	if (c > max) { max = c; cnt++; }
	if (d > max) { cnt++; }
	return (cnt);
}

int	visible_right(int a, int b, int c, int d)
{
	return (visible_left(d, c, b, a));
}
