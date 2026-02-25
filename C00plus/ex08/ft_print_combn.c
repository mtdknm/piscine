/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 11:43:52 by root              #+#    #+#             */
/*   Updated: 2026/02/25 18:37:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_number(int *arr,int n)
{
    int i=0;
    while(i<n)
    {
        ft_putchar(arr[i]+'0');
        i++;
    }
}

int is_last(int *arr,int n)
{
    int i;
    i=0;
    while(i<n)
    {
        if(arr[i]!=10-n+i)
            return (0);
        i++;
    }
    return (1);
}

void    backtrack(int *arr,int n,int index,int start)
{
    int i;
    if(index==n)
    {
        ft_print_number(arr,n);
        if(!is_last(arr,n))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
        return ;
    }
    i=start;
    while(i<=9)
    {
        arr[index]=i;
        backtrack(arr,n,index+1,i+1);
        i++;
    }
}

void ft_print_combn(int n)
{
    int arr[10];
    if(n<=0||n>=10)
        return ;
    backtrack(arr,n,0,0);
}

// int main(void)
// {
//     ft_print_combn(3);
// }