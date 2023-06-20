# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 19:46:31 by abalhamm          #+#    #+#              #
#    Updated: 2023/06/20 18:04:36 by abalhamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = algorithm.c check_rules_p.c empty_rules.c get_best_value.c push_rules.c swap_rules.c\
 	   push_swap_utils.c push_swap.c reverse_rotate_rules.c rotate_rules.c sorting.c\

SRCS = pushSwap.c 

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Werror -Wextra -Wall

$(NAME): $(OBJ)
	@make -C ./libft
	$(CC) $(CFLAGS) $(OBJ) -Llibft -lft -o $(NAME)
	
all: $(NAME)

clean:
	@make -C ./libft clean
	@rm -rf $(OBJ)
	@echo "Objects Removed !"
	
fclean: clean
	@make -C ./libft fclean
	@rm -rf $(NAME)
	@echo "Binary-num Removed"

re: fclean all
	