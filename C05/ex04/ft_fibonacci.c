/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 16:04:28 by kmatsuda          #+#    #+#             */
/*   Updated: 2026/02/15 17:41:07 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	i = -1;
// 	while (i <= 10)
// 	{
// 		printf("ft_fibonacci(%d) = %d\n", i, ft_fibonacci(i));
// 		i++;
// 	}
// 	return (0);
// }
