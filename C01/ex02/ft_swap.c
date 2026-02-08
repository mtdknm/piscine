/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:35:19 by marvin            #+#    #+#             */
/*   Updated: 2026/02/07 21:35:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a,int *b)
{
//元の値を保存
    int origin_a=*a;
    int origin_b=*b;
//値を交換
    *a=origin_b;
    *b=origin_a;
}

// int main(void)
// {
//     int a=1;
//     int b=2;

//     ft_swap(&a,&b);
//     printf("a:%d,b:%d",a,b);

//     return (0);
// }