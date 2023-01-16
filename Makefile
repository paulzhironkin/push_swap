# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 16:18:28 by latahbah          #+#    #+#              #
#    Updated: 2023/01/16 18:41:01 by latahbah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIST =	get_nums.c			go_sort.c			is_sorted.c \
		make_push_swap.c	operations1.c		operations2.c \
		push_swap.c			sort_big_stack.c	sort_small_stack.c \
		is_int.c

LIB = libft/libft.a

OBJ = $(patsubst %.c,%.o,$(LIST))

D_FILES = $(patsubst %.c,%.d,$(LIST))

OPTFLAGS = -O2
FLAGS = -Wall -Wextra

all: $(NAME)

$(NAME)::
	@cd libft && make

$(NAME):: $(OBJ)
	gcc $(FLAGS) $(OPTFLAGS) $(OBJ) $(LIB) -I . -o $(NAME)

%.o : %.c
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

clean::
	@cd libft && make clean

clean::
	@rm -f $(OBJ) $(D_FILES)

fclean:: clean
	@cd libft && make fclean

fclean:: clean
	@rm -f $(NAME)

re:: fclean all
	@cd libft && make re

re:: fclean	all

.PHONY: all clean fclean re bonus
