/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 23:49:34 by root              #+#    #+#             */
/*   Updated: 2026/02/16 13:49:53 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (is_prime(nb) == 0)
		nb++;
	return (nb);
}

// #include<stdio.h>
// int main(void)
// {
//     printf("%d\n",ft_find_next_prime(6));
//     printf("%d\n",ft_find_next_prime(2));
//     printf("%d\n",ft_find_next_prime(5));
// }