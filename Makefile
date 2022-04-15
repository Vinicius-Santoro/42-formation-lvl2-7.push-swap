# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 20:35:02 by vnazioze          #+#    #+#              #
#    Updated: 2022/04/13 20:35:04 by vnazioze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
HEADER		=	push_swap.h

INCLUDE		=	-I ./includes

CC			=	gcc -g
RM			=	rm -f
CFLAGS		=	-Wall -Wextra -Werror

LIBFT		=	./libs/libft/libft.a
PRINTF		=	./libs/printf/libftprintf.a

SRC_PATH	=	./src/
OBJ_PATH	=	./obj/

SRC_FILES	=	main.c validations.c linked_list.c	\
				rules.c locate_number.c utils.c		\
				operations.c

SRC			=	$(addprefix $(SRC_PATH),$(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_PATH),$(subst .c,.o,$(SRC_FILES)))

$(OBJ_PATH)%.o:	$(SRC_PATH)%.c
				mkdir -p $(OBJ_PATH)
				$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

all:			$(NAME)

$(NAME):		$(LIBFT) $(PRINTF) $(OBJ)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) $(PRINTF)
				
$(LIBFT):
				make bonus -C ./libs/libft

$(PRINTF):
				make all -C ./libs/printf

clean:
				$(RM) $(OBJ)
				make clean -C libs/libft
				make clean -C libs/printf

fclean:			clean
				$(RM) $(NAME)
				make fclean -C libs/libft
				make fclean -C libs/printf

re:				fclean all

.PHONY:			all, clean, fclean, re
