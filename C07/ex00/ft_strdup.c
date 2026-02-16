/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 14:02:31 by kmatsuda          #+#    #+#             */
/*   Updated: 2026/02/16 18:31:27 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int i;
	char *dup;

	while (src[i])
		i++;
	dup = malloc(i + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}