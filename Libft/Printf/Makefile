# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mblank <mblank@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 15:22:05 by mblank	           #+#    #+#              #
#    Updated: 2023/07/23 09:30:06 by mblank           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g

$(VERBOSE).SILENT:

SRC_NAME = ft_printf.c ft_printf_sidebas.c ft_printf_ptr.c ft_printf_unsigned.c ft_printf_hex.c ft_printf_tools.c \

SRC_PATH = ./sources

OBJ_PATH = ./objects

OBJS = $(addprefix $(OBJ_PATH)/, $(SRC_NAME:.c=.o))

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))

INCLUDES	= 	-I ../../headers/

DEFAULT = \033[0;39m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "$(GREEN)$(NAME) created!$(DEFAULT)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -rf $(OBJ_PATH)
	@echo "$(YELLOW)$(NAME) files are removed$(DEFAULT)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) is deleted$(DEFAULT)"

re:	fclean all
