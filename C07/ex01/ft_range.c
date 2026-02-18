/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:12:46 by root              #+#    #+#             */
/*   Updated: 2026/02/18 12:50:37 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
    int size;
    int *a;
    int i;
    
    if(min>=max)
    {
        *range=NULL;
        return (0);
    }
    size=max-min;
    a=malloc(sizeof(int)*size);
    if(a==NULL)
    {
        *range=NULL;
        return (-1);
    }
    i=0;
    while(i<size)
    {
        a[i]=min;
        min++;
        i++;
    }
    *range=a;
    return (size);
}

#include <stdio.h>

int main(void)
{
    int *arr;
    int size;
    int i;

    size = ft_ultimate_range(&arr, 3, 8);

    printf("size = %d\n", size);

    if (size > 0)
    {
        i = 0;
        while (i < size)
        {
            printf("%d ", arr[i]);
            i++;
        }
        printf("\n");
        free(arr);
    }
    else if (size == 0)
    {
        printf("Empty range\n");
    }
    else
    {
        printf("Malloc error\n");
    }

    return (0);
}
