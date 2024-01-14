# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/03 09:36:14 by pirulenc          #+#    #+#              #
#    Updated: 2024/01/03 10:35:21 by pirulenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SOURCES = sources/main.c \
			sources/ft_checker.c \
			sources/ft_checker_bis.c \
			sources/ft_cutting.c \
			sources/ft_stack.c \
			sources/ft_stackclear.c \
			sources/ft_start_algo.c \
			sources/ft_stack_count.c \
			sources/ft_algo.c \
			Operations/ft_swap.c \
			Operations/ft_push.c \
			Operations/ft_rotate.c \
			Operations/ft_reverse.c

CFLAGS = -Wall \
			-Werror \
			-Wextra \
			-Iincludes \
			-g

CC = cc

OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJECTS)
	@${MAKE} -C ./libft
	@$(CC) $(CFLAGS) $(OBJECTS) ./libft/libft.a -o $(NAME)

clean:
	@${MAKE} -C ./libft clean
	@rm  -f $(OBJECTS)

fclean: clean
	@${MAKE} -C ./libft fclean
	@rm -f $(NAME)

re: fclean all
	@${NAME} -C ./libft re
