/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 09:40:44 by root              #+#    #+#             */
/*   Updated: 2026/02/13 19:28:07 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	vase_valid(char *base, int base_len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base_len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;
	char	r;

	base_len = 0;
	n = 0;
	r = 0;
	while (base[base_len])
	{
		base_len++;
	}
	if (vase_valid(base, base_len) == 0)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= base_len)
		ft_putnbr_base((int)(n / base_len), base);
	r = base[n % base_len];
	write(1, &r, 1);
}

int	main(void)
{
	write(1, "Decimal:\n", 9);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n\n", 2);

	write(1, "Binary:\n", 8);
	ft_putnbr_base(42, "01");
	write(1, "\n\n", 2);

	write(1, "Hex:\n", 5);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n\n", 2);

	write(1, "Octal(custom chars):\n", 21);
	ft_putnbr_base(42, "poneyvif");
	write(1, "\n\n", 2);

	write(1, "Negative:\n", 10);
	ft_putnbr_base(-42, "0123456789");
	write(1, "\n\n", 2);

	write(1, "Invalid base (should print nothing):\n", 37);
	ft_putnbr_base(42, "0");
	write(1, "\n", 1);

	return (0);
}