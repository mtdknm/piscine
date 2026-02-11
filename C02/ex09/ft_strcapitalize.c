/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 00:34:49 by root              #+#    #+#             */
/*   Updated: 2026/02/11 10:26:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str)
{
    int i;
    int new_word;

    i = 0;
    new_word = 1;

    while (str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= '0' && str[i] <= '9'))
        {
            if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
                str[i] -= 32;
            else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
                str[i] += 32;

            new_word = 0;
        }
        else
        {
            new_word = 1;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str1[] = "hi, how are you? 42words forty-two; fifty+and+one";

    printf("%s\n", ft_strcapitalize(str1));

    return (0);
}