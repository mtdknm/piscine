/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:46:38 by root              #+#    #+#             */
/*   Updated: 2026/02/12 19:42:59 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
		{
			j++;
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char s[]="Hello World";

//     printf("%s\n",ft_strstr(s,"World"));
//     printf("%s\n",ft_strstr(s,"Hello"));
//     printf("%s\n",ft_strstr(s,"abc"));
//     printf("%s\n",ft_strstr(s,""));

//     return (0);
// }