/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 00:34:49 by root              #+#    #+#             */
/*   Updated: 2026/02/11 10:11:29 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
    int i;
    i   =   0;
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-='a'-'A';
        }
        i++;
    }

    return (str);
}

int main(void)
{
    char str1[] = "123HI";
    char str2[] = "Hello\n";

    printf("%s\n", ft_strupcase(str1));
    printf("%s\n", ft_strupcase(str2));

    return (0);
}