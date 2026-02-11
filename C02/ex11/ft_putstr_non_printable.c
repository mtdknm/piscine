/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:29:01 by root              #+#    #+#             */
/*   Updated: 2026/02/11 11:59:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr_non_printable(char *str)
{
    int i;
    char *hex;
    unsigned char c;

    hex="01234567891abcdef";
    i=0;
    while(str[i])
    {
        if(str[i]>=32&&str[i]<=126)
        {
            write(1,&str[i],1);
        }
        else
        {
            write(1,"\\",1);
            c=(unsigned char)str[i];
            write(1, &hex[c/16],1);
            write(1, &hex[c%16],1);
        }
        i++;
    }
}

int main(void)
{
    char test1[] = "Hello World";
    char test2[] = "Hello\nWorld";
    char test3[] = "Tab\tTest";

    ft_putstr_non_printable(test1);
    write(1, "\n", 1);

    ft_putstr_non_printable(test2);
    write(1, "\n", 1);

    ft_putstr_non_printable(test3);
    write(1, "\n", 1);

    return (0);
}