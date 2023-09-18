# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 14:55:40 by crmanzan          #+#    #+#              #
#    Updated: 2023/09/18 15:57:41 by crmanzan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(INCL)
INCL = libft.h

SRCS = 	ft_isalnum.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_strlen.c \
#		ft_memset.c \
#		ft_strdup.c \
#		ft_strnstr.c \
# 		ft_calloc.c \
#		ft_bzero.c \
#		ft_memcmp.c \
#		ft_strrchr.c \
#		ft_strchr.c \
#		ft_memmove.c \
#		ft_memchr.c \
#		ft_atoi.c \
#		ft_isalpha.c \
#		ft_isascii.c \
#		ft_isdigit.c \
#		ft_isprint.c \
#		ft_tolower.c \
#		ft_toupper.c \
#		ft_strlcat.c \
#		ft_strlcpy.c \
#		ft_strncmp.c \
#		ft_memcpy.c \

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
