/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:12:49 by root              #+#    #+#             */
/*   Updated: 2026/02/11 13:31:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i=0;
    j=0;

    while(dest[i])
    {
        i++;
    }

    while(src[j])
    {
        dest[i+j]=src[j];
        j++;
    }

    dest[i+j]='\0';
    return (dest);
}

int main(void)
{
    char str1[20]="Hello";
    char str2[]="World";

    ft_strcat(str1,str2);
    printf("%s\n",str1);

    return (0);
}