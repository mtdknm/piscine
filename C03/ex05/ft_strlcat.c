/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 22:47:07 by root              #+#    #+#             */
/*   Updated: 2026/02/12 01:00:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i=0;
    unsigned int dest_len=0;
    unsigned int src_len=0;

    while(dest[dest_len])
    {
        dest_len++;
    }
    while(src[src_len])
    {
        src_len++;
    }

    if(size<=dest_len)
        return (size+src_len);

    while(src[i]&&(dest_len+i)<(size-1))
    {
        dest[dest_len+i]=src[i];
        i++;
    }
    dest[dest_len+i]='\0';

    return (dest_len+src_len);    
}

int main(void)
{
    char buf[10] = "Hello";
    unsigned int ret;

    ret = ft_strlcat(buf, "World", 3);

    printf("result = %s\n", buf);
    printf("return = %u\n", ret);

    return (0);
}
