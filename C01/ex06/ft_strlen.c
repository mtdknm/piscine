/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 23:45:38 by marvin            #+#    #+#             */
/*   Updated: 2026/02/07 23:45:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int len=0;
    while(str[len]!='\0')
    {
        len++;
    }
    return (len);
}

// int main(void)
// {
//     char *s="hello";
//     printf("%d\n",ft_strlen(s));
//     return (0);
// }
