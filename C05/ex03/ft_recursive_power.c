/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:14:03 by root              #+#    #+#             */
/*   Updated: 2026/02/15 15:56:09 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("2^3 = %d\n", ft_recursive_power(2, 3));
	printf("5^0 = %d\n", ft_recursive_power(5, 0));
	printf("0^0 = %d\n", ft_recursive_power(0, 0));
	printf("3^1 = %d\n", ft_recursive_power(3, 1));
	printf("4^-1 = %d\n", ft_recursive_power(4, -1));
	printf("0^5 = %d\n", ft_recursive_power(0, 5));
	return (0);
}
