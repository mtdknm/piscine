/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 22:02:22 by marvin            #+#    #+#             */
/*   Updated: 2026/02/07 22:02:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a,int *b)
{
    int a_origin=*a;
    int b_origin=*b;

    *a=a_origin/b_origin;
    *b=a_origin%b_origin;
}

// int main(void)
// {
//     int a=7;
//     int b=2;
//     ft_ultimate_div_mod(&a,&b);
//     printf("a:%d,b:%d",a,b);

//     return (0);
// }