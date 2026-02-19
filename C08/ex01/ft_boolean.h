/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 17:39:55 by kmatsuda          #+#    #+#             */
/*   Updated: 2026/02/19 19:23:57 by kmatsuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <stdbool.h>
# include <unistd.h>

typedef bool	t_bool;

# define EVEN(nbr) ((nbr) % 2 == 0)

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

# define TRUE 1
# define FALSE 0

# define SUCCESS 0

#endif
