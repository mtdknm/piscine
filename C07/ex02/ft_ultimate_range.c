/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 15:49:07 by kmatsuda          #+#    #+#             */
/*   Updated: 2026/02/21 16:27:35 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*a;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	a = malloc(sizeof(int) * size);
	if (a == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		a[i] = min;
		min++;
		i++;
	}
	*range = a;
	return (size);
}

// #include <stdio.h>

// int	ft_ultimate_range(int **range, int min, int max);

// int	main(void)
// {
// 	int	*arr;
// 	int	size;
// 	int	i;

// 	size = ft_ultimate_range(&arr, 3, 6);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(arr);
// 	return (0);
// }
