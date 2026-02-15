/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 10:55:19 by root              #+#    #+#             */
/*   Updated: 2026/02/15 11:53:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int result;
    result=1;
    if(nb<0)
    {
        return (0);
    }
    while(nb>0)
    {
        result*=nb;
        nb--;
    }
    return (result);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", ft_iterative_factorial(5));
//     printf("%d\n", ft_iterative_factorial(0));
//     return(0);
// }
