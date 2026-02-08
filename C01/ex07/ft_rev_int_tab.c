/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 00:23:28 by marvin            #+#    #+#             */
/*   Updated: 2026/02/08 00:23:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab,int size)
{
    int temp;
    int i=0;

    while(i<=size/2)
    {
        temp=tab[i];//一時的に値を保管しておく
        tab[i]=tab[size-1-i];
        tab[size-1-i]=temp;
        i++;
    }
}

// int main(void)
// {
//     int a[]={1,2,3,4,5};
//     int size=5;
//     int i=0;

//     ft_rev_int_tab(a,size);
//     while(i<size)
//     {
//         printf("%d",a[i]);
//         i++;
//     }

//     printf("\n");

//     return (0);
// }