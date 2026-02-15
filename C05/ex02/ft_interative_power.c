/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:42:05 by root              #+#    #+#             */
/*   Updated: 2026/02/15 11:54:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_interative_power(int nb, int power)
{
    int i;
    i=1;
    if(power<0)
        return (0);
    while(power>0)
    {
        i*=nb;
        power--;
    }
    return (i);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", ft_interative_power(3,2));
//     printf("%d\n", ft_interative_power(0,0));
//     return (0);
// }