/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:12:46 by root              #+#    #+#             */
/*   Updated: 2026/02/21 16:27:01 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

// #include <stdio.h>

// int	*ft_range(int min, int max);

// int	main(void)
// {
// 	int	*arr;
// 	int	max;
// 	int	min;
// 	int	i;
// 	int	size;

// 	max = 6;
// 	min = 3;
// 	arr = ft_range(min, max);
// 	if (!arr)
// 	{
// 		printf("NULL returned\n");
// 		return (1);
// 	}
// 	size = max - min;
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
