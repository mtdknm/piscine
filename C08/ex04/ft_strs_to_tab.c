/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 18:15:05 by kmatsuda          #+#    #+#             */
/*   Updated: 2026/02/23 09:18:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int i;
	i=0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int i;
	char *copy;
	i=0;
	copy=malloc(sizeof(char)*(ft_strlen(src)+1));
	if(copy==NULL)
		return NULL;
	while(src[i])
	{
		copy[i]=src[i];
		i++;
	}
	copy[i]='\0';
	return copy;
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str *data;

	data=malloc(sizeof(t_stock_str)*(ac+1));
	if(data==NULL)
		return NULL;
	i=0;
	while(i<ac)
	{
		data[i].size=ft_strlen(av[i]);
		data[i].str=av[i];
		data[i].copy=ft_strdup(av[i]);
		if (data[i].copy==NULL)
			return NULL;
		i++;
	}
	data[ac].size=0;
	data[ac].str=NULL;
	data[ac].copy=NULL;
	return (data);
}
