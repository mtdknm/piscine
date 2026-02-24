# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmatsuda <kmatsuda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/24 00:34:41 by root              #+#    #+#              #
#    Updated: 2026/02/24 18:46:43 by kmatsuda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCDIR  = srcs
INCDIR  = includes

SRCS    = $(SRCDIR)/ft_putchar.c \
          $(SRCDIR)/ft_swap.c \
          $(SRCDIR)/ft_putstr.c \
          $(SRCDIR)/ft_strlen.c \
          $(SRCDIR)/ft_strcmp.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(SRCDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/ft.h
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re