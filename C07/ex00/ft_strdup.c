/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:02:31 by kmatsuda          #+#    #+#             */
/*   Updated: 2026/02/21 16:35:16 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = malloc(i + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*copy;

// 	str = "hello";
// 	copy = ft_strdup(str);
// 	printf("original: %s\n", str);
// 	printf("copy    : %s\n", copy);
// 	free(copy);
// 	return (0);
// }
