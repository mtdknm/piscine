/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 10:15:27 by root              #+#    #+#             */
/*   Updated: 2026/02/21 16:44:46 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest + i);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (ft_strlen(sep)) * (size - 1);
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*result;
	char	*p;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc(get_total_len(size, strs, sep) + 1);
	if (result == NULL)
		return (NULL);
	p = result;
	i = 0;
	while (i < size)
	{
		p = ft_strcpy(p, strs[i]);
		if (i++ < size - 1)
			p = ft_strcpy(p, sep);
	}
	*p = '\0';
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		size;
// 	char	*strs[] = {"hello", "World", "42"};
// 	char	*sep;
// 	char	*res;

// 	size = 3;
// 	sep = "-";
// 	res = ft_strjoin(size, strs, sep);
// 	if (res == NULL)
// 		return (1);
// 	printf("%s\n", res);
// 	free(res);
// 	return (0);
// }
