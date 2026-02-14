#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

/* 視点から見た箱の数が正しいかチェック [cite: 89] */
int	check_line(int *line, int expected)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count == expected);
}

/* 行と列の両方向から視点チェック */
int	is_valid_view(int grid[4][4], int *input)
{
	int	i;
	int	j;
	int	line[4];
	int	rev_line[4];

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			line[j] = grid[i][j];
			rev_line[j] = grid[i][3 - j];
		}
		if (!check_line(line, input[8 + i]) || !check_line(rev_line, input[12 + i]))
			return (0);
	}
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			line[j] = grid[j][i];
			rev_line[j] = grid[3 - j][i];
		}
		if (!check_line(line, input[i]) || !check_line(rev_line, input[4 + i]))
			return (0);
	}
	return (1);
}

/* 重複チェック [cite: 96] */
int	is_safe(int grid[4][4], int row, int col, int val)
{
	int	i;

	i = 0;
	while (i < col)
		if (grid[row][i++] == val)
			return (0);
	i = 0;
	while (i < row)
		if (grid[i++][col] == val)
			return (0);
	return (1);
}

int	solve(int grid[4][4], int pos, int *input)
{
	int	val;

	if (pos == 16)
		return (is_valid_view(grid, input));
	val = 0;
	while (++val <= 4)
	{
		if (is_safe(grid, pos / 4, pos % 4, val))
		{
			grid[pos / 4][pos % 4] = val;
			if (solve(grid, pos + 1, input))
				return (1);
			grid[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

/* メイン関数: パースと実行 [cite: 99, 103] */
int	main(int argc, char **argv)
{
	int	grid[4][4] = {{0}};
	int	input[16];
	int	i;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	i = 0;
	while (i < 16)
	{
		if (argv[1][i * 2] < '1' || argv[1][i * 2] > '4')
		{
			ft_putstr("Error\n");
			return (0);
		}
		input[i] = argv[1][i * 2] - '0';
		i++;
	}
	if (solve(grid, 0, input))
	{
		i = -1;
		while (++i < 4)
		{
			int j = -1;
			while (++j < 4)
			{
				char c = grid[i][j] + '0';
				write(1, &c, 1);
				if (j < 3) write(1, " ", 1);
			}
			write(1, "\n", 1);
		}
	}
	else
		ft_putstr("Error\n");
	return (0);
}