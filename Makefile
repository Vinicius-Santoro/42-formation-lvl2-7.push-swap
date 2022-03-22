# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnazioze <vnazioze@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 20:04:18 by vnazioze          #+#    #+#              #
#    Updated: 2022/03/22 20:04:22 by vnazioze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

.DEFAULT_GOAL    :=    all

NAME = pipex

DIRECTORY2 = ./utils/
DIRECTORY1 = ./src/

SRC =	$(addprefix $(DIRECTORY1), \
		exec.c\
		free.c\
		main.c\
		pipes.c\
		treat_space.c\
		)

UTILS = $(addprefix $(DIRECTORY2), \
		ft_split.c \
        ft_strchr.c \
        ft_strdup.c \
        ft_strjoin.c \
        ft_strlen.c \
        ft_strncmp.c \
        ft_strnstr.c \
        ft_strrchr.c \
        ft_substr.c \
		ft_calloc.c \
		)

OBJS = $(SRC:.c=.o) $(UTILS:.c=.o)

CFLAG = -g3 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(OBJS) -o $(NAME) $(CFLAG) 
	@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

%.o: %.c
	gcc $(CFLAG) -c $< -o $@
	@echo "\n$(NAME): $(GREEN)object files were created$(RESET)"

clean:
	rm -f $(OBJS)
	@echo "$(NAME): $(RED)object files were deleted$(RESET)"

fclean: clean
	rm -f $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re: fclean all

.PHONY: clean fclean re all