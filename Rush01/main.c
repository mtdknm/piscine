#include "rush01.h"

int	main(int argc, char **argv)
{
	t_ctx	ctx;

	if (argc != 2 || !parse_clues(argv[1], &ctx) || !solve(&ctx))
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
