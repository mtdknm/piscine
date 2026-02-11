/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:41:06 by root              #+#    #+#             */
/*   Updated: 2026/02/11 13:12:21 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i=0;

   while(i<n)
   {
    if((unsigned char)s1[i]!=(unsigned char)s2[i])
        return ((unsigned char)s1[i]-(unsigned char)s2[i]);

    i++;
   }
   return (0);
}

int main(void)
{
    char s1[]="abcde";
    char s2[]="abcef";

    printf("%d\n",ft_strncmp(s1,s2,3));
}
