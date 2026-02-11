/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 00:34:49 by root              #+#    #+#             */
/*   Updated: 2026/02/11 01:12:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;
    i   =   0;
    while(str[i]!='\0')
    {
        if(!(str[i]>='a'&&str[i]<='z'))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

int main(void)
{
    printf("%d\n", ft_str_is_lowercase("123hi"));
    printf("%d\n", ft_str_is_lowercase("hi"));
    printf("%d\n", ft_str_is_lowercase(""));

    return (0);
}