/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:42:05 by root              #+#    #+#             */
/*   Updated: 2026/02/16 16:42:30 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	i = 1;
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(3, 2));
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	return (0);
// }