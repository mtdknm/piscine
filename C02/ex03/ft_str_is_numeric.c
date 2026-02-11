/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 00:19:20 by root              #+#    #+#             */
/*   Updated: 2026/02/11 00:49:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;
    i=0;

    while(str[i]!='\0')
    {
        if(!(str[i]>='0'&&str[i]<='9'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("123"));
// 	printf("%d\n", ft_str_is_numeric("123Hi"));
//     printf("%d\n", ft_str_is_numeric(""));
// 	return (0);
// }
