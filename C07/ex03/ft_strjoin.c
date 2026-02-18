/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:42:47 by kmatsuda          #+#    #+#             */
/*   Updated: 2026/02/18 20:29:14 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	str[] return (i);
}

void	copy_str(char *dest, char *str, int *index)
{
	int	i;

	i = 0;
	while (str[i])
	{
		dest[index] = str[i];
		(*index)++;
		i++;
	}
}

void	copy_str(char *dest, char *src, int *index)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*index] = src[i];
		(*index)++;
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int len_sep;
	char *result;

	i = 0;
	j = 0;

	len_sep = ft_strlen(sep);
	result = (char *)malloc(sizeof(char) * (size * (len_sep + 1) - 1));
	if (result == NULL)
		return (NULL);
	while (i < size)
	{
		result[j] = strs[i];
		result[j];
		i++;
		j += size + 1;
	}
	i = 0;
	while (i < size)
	{
		result[i] = sep[i];
	}
	if (size == 0)
	{
		result = NULL;
	}

	return (result);
}