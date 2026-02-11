/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 13:33:40 by root              #+#    #+#             */
/*   Updated: 2026/02/11 14:42:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if(!to_find[0])
        return (str);

    i=0;
    
    while(str[i])
    {
        j=0;
        while(str[i+j]&&str[i+j]==to_find[j])
        {
            j++;
            if(!to_find[j])
            {
                return (&str[i]);
            }
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char *str1;
    char *str2;

    str1="Hello World";
    str2="World";
    
    char *result = ft_strstr(str1, str2);

    printf("%s\n",result);
}