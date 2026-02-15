/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:36:22 by root              #+#    #+#             */
/*   Updated: 2026/02/15 12:16:11 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if(nb<0)
        return (0);
    if(nb==0||nb==1)
        return (1);
    return (nb*ft_recursive_factorial(nb-1));
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", ft_recursive_factorial(5));
//     printf("%d\n", ft_recursive_factorial(0));
//     return (0);
// }