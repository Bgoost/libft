# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 12:49:25 by crmanzan          #+#    #+#              #
#    Updated: 2023/09/13 12:53:29 by crmanzan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# All the text below in blue are variable that we create.# 
# This librray is not a programme. We are compiling functions in a library.# 
# We are not executing any function.# 
COMPILER = cc
# This is a copiler # 
NAME = libft.a
#  you have to name the file # 
COMPILEFLAGS = -Wall -Wextra -Werror
LIBRARY = ar-rcs
# We create the (static) library with this. 
#  ar-  OR archiver, is a Unix utility that maintains groups of files as a single archive file.(compiles) # 
#  rc- This tells ar to create an archive (c) and to insert the objects, # 
#  replacing older files where needed (option r) # 
#  s is silent to silence what is happening # 

SRC = $(find . -name "*.c" ! -name "*_bonus.c")

#  This includes the functions for the library # 
BSRC = $(find . -name "*_bonus.c") 
 
#  This includes the Bonus functions for the library # 
HEADER = libft.h
OBJ = $(SRC:.c=.o)
#  This changes all files from .c to .o  --- .o are the objects generatig the list of arrays.# 
OBJBONUS = $(BSRC:.c=.o)
all: $(NAME)
%.o: %.c $(HEADER)
    cc $(FLAGS) -c $< -o $@
#This is  where everything copiles, the flags...#
$(NAME): $(OBJ)
    ar rc $(NAME) $(OBJ)
#This is  where everything copiles, the files...#
bonus: .bonus
.bonus: $(OBJBONUS)
    ar rc $(NAME) $(OBJBONUS)
    @touch .bonus
clean:
    rm -f $(OBJ) $(OBJBONUS) .bonus
# this removes files (a.out) (.o) that old or not being used to free up memory # 
fclean: clean
    rm -f $(NAME)
# cleans f - force clean. (libft.h) # 
re: fclean all
.PHONY: all bonus clean fclean re
