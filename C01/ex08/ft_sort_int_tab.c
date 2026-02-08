/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 10:53:03 by marvin            #+#    #+#             */
/*   Updated: 2026/02/08 10:53:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int l;
    int i=0;
    int temp;

    while(l<size-1)
    {
        i=0;
        while(i<size-1-l)
        {
            if(tab[i]>tab[i+1])
            {
                temp=tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=temp;
            }
            i++;
        }
        l++;
    }
    
}

// int main(void)
// {
//     int a[]={5,3,8,1};
//     int size=4;
//     ft_sort_int_tab(a,size);

//     int i=0;
//     while(i<size)
//     {
//         printf("%d",a[i]);
//         i++;
//     }

//     return (0);
// }
