# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 16:37:00 by anagarc4          #+#    #+#              #
#    Updated: 2023/07/25 16:37:02 by anagarc4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
RM = rm -rf
CC = gcc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3
LIBFT_LIB = libft/libft.a

PS = main.c \
	check.c \
	init.c \
	free.c \
	sort_small.c \
	radix.c \
	swap.c \
	rotate.c \
	reverse_rotate.c \
	push.c \

	 
SRC_PS = $(addprefix src/, $(PS))
OBJ_PS = $(SRC_PS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_PS)
	@make -C libft/
	$(CC) $(CFLAGS) $(OBJ_PS) -o $(NAME) $(LIBFT_LIB)

clean:
	@make fclean -C libft/
	@$(RM) $(OBJ_PS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all 

.PHONY: re clean fclean all
