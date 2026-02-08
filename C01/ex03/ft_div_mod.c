/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:44:03 by marvin            #+#    #+#             */
/*   Updated: 2026/02/07 21:44:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a,int b,int *div,int *mod)
{
    *div=a/b;
    *mod=a%b;
}

// int main(void)
// {
//     int a=17,b=5;
//     int div;
//     int mod;

//     ft_div_mod(a,b,&div,&mod);
//     printf("div:%d,mod:%d\n",div,mod);
//     return (0);
// }