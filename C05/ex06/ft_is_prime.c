/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 23:40:07 by root              #+#    #+#             */
/*   Updated: 2026/02/15 23:48:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;
    i=2;
    if(nb<=1)
        return (0);
    while(i*i<=nb)
    {
        if(nb%i==0)
            return (0);
        i++;
    }
    return (1);
}

// #include<stdio.h>
// int main(void)
// {
//     printf("%d\n",ft_is_prime(8));
//     printf("%d\n",ft_is_prime(5));
//     return(0);
// }