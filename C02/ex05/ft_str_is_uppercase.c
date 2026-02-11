/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 00:34:49 by root              #+#    #+#             */
/*   Updated: 2026/02/11 01:14:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;
    i   =   0;
    while(str[i]!='\0')
    {
        if(!(str[i]>='A'&&str[i]<='Z'))
        {
            return (0);
        }
        i++;   
    }   
    return (1);
}

int main(void)
{
    printf("%d\n", ft_str_is_uppercase("123Hi"));
    printf("%d\n", ft_str_is_uppercase("HI"));
    printf("%d\n", ft_str_is_uppercase(""));

    return (0);
}