# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mblank <mblank@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 17:00:30 by mblank          #+#    #+#              #
#    Updated: 2023/07/18 19:14:16 by mblank           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -Imlx -g #-fsanitize=address


LIBFT = ./Libft/libft.a
LIBFT_PATH = ./Libft

INCLUDES = -I ./headers/

SRC_PATH = ./sources

OBJ_PATH = ./objects

SRC_NAME = 	main.c utils.c \


OBJS = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))

DEFAULT = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m


all: $(NAME)

$(NAME) : $(OBJS)
	@make -s -C $(LIBFT_PATH)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@$(CC) $(CFLAGS) $(INCLUDES) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled $(DEFAULT)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p objects
	@$(CC) $(INCLUDES) $(CFLAGS) $(objects) -c $(^) -o $(@)

clean:
	@make clean -s -C $(LIBFT_PATH)
	@rm -rf $(OBJ_PATH)
	@echo "$(YELLOW)$(NAME) files are removed$(DEFAULT)"

fclean:
	@rm -rf objects/
	@make fclean -s -C $(LIBFT_PATH)
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) is deleted$(DEFAULT)"


re: fclean all

.PHONY: all clean fclean re