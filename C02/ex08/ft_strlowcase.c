/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 00:34:49 by root              #+#    #+#             */
/*   Updated: 2026/02/12 18:49:22 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str1[] = "123HI";

// 	char str2[] = "Hello\n";

// 	printf("%s\n", ft_strlowcase(str1));
// 	printf("%s\n", ft_strlowcase(str2));

// 	return (0);
// }