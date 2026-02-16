/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 23:17:11 by root              #+#    #+#             */
/*   Updated: 2026/02/16 13:49:44 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d\n",ft_sqrt(9));
//     printf("%d\n",ft_sqrt(36));
//     printf("%d\n",ft_sqrt(0));
//     return (0);
// }