/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:14:03 by root              #+#    #+#             */
/*   Updated: 2026/02/15 12:22:48 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if(power<0)
        return (0);
    if(power==0)
        return (1);
    return (nb*ft_recursive_power(nb,power-1));
}

#include <stdio.h>

int	main(void)
{
	printf("2^3 = %d\n", ft_recursive_power(2, 3));   // 8
	printf("5^0 = %d\n", ft_recursive_power(5, 0));   // 1
	printf("0^0 = %d\n", ft_recursive_power(0, 0));   // 1
	printf("3^1 = %d\n", ft_recursive_power(3, 1));   // 3
	printf("4^-1 = %d\n", ft_recursive_power(4, -1)); // 0
	printf("0^5 = %d\n", ft_recursive_power(0, 5));   // 0
	return (0);
}
