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

NAME = Push_swap

SOURCES = main.c \
			ft_checker.c \
			ft_checker_bis.c \
			ft_cutting.c \
			ft_stack.c \
			ft_stackclear.c

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
