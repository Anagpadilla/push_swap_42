# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anagarc4 <anagarc4@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 13:05:23 by anagarc4          #+#    #+#              #
#    Updated: 2023/04/10 12:13:48 by anagarc4         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	 =	libft.a

CC		=	gcc 

CFLAGS	=	-Wall -Wextra -Werror 

SRCS	=	ft_isalpha.c ft_memcpy.c  ft_strlcpy.c ft_strrchr.c \
			ft_atoi.c    ft_isascii.c ft_memset.c  ft_strlen.c  ft_tolower.c \
			ft_bzero.c   ft_isdigit.c ft_strchr.c  ft_strncmp.c ft_toupper.c \
			 ft_isprint.c ft_strlcat.c ft_strnstr.c ft_memmove.c \
			ft_strdup.c  ft_memchr.c  ft_calloc.c  ft_substr.c	ft_memcmp.c  \
			ft_strjoin.c ft_strtrim.c ft_putchar_fd.c \
			ft_putstr.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c  \
			ft_split.c ft_lstnew.c	ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c \
			ft_lstdelone.c ft_lstclear.c ft_lstadd_back.c  \

OBJS	=	$(SRCS:.c=.o)

LIB		=	ar -rcs

RM		=	rm -f

all:	$(NAME)

$(NAME):	$(OBJS) 
	@$(LIB) $(NAME) $(OBJS) 
	
clean:	
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean:	clean
	$(RM) $(NAME)
	
re:	fclean all

.PHONY:	all clean fclean re bonus
