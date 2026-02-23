/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:20:33 by root              #+#    #+#             */
/*   Updated: 2026/02/23 10:40:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void    ft_putstr(char *str)
{
    int i;
    i=0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_putnbr(int nb)
{
    long n;
    n=nb;
    if(n<0)
    {
        ft_putchar('-');
        n=-n;
    }
    if(n>=10)
        ft_putnbr((int)(n/10));
    ft_putchar((char)('0'+(n%10)));
}
void ft_show_tab(struct s_stock_str *par)
{
    int i;
    i=0;
    while(par[i].str)
    {
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}

#include<stdlib.h>
int main(int argc, char **argv)
{
    int i;
    i=0;

    t_stock_str *tab;

    tab=ft_strs_to_tab(argc-1,argv+1);
    if(tab==NULL)
        return (1);
    ft_show_tab(tab);
    i=0;
    while(tab[i].str)
    {
        free(tab[i].copy);
        i++;
    }
    free(tab);  
    return (0);
}