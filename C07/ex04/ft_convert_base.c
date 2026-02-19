/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 11:23:16 by root              #+#    #+#             */
/*   Updated: 2026/02/19 15:33:35 by kmatsuda         ###   ########.fr       */
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
int	ft_is_base_valid(char *base)
{
	int	i;
	int	j;
	int	len;

	len == ft_strlen(base);
	if (len < 2)
		retrun(0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] = ' ')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	base_len;

	i = 0;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			;
		sign++;
	}
	base_len = ft_strlen(base);
	while ()
	{
		result = result
	}
}

char	*ft_convert_base(char *nbr, char *baae_from, char *base_to)
{
	if (ft_is_base_valid(base_from) == 0)
}