# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 06:22:55 by nileempo          #+#    #+#              #
#    Updated: 2024/01/23 15:30:04 by nileempo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Text colors
RESET = \033[0m
GREEN = \033[32m
RED = \033[31m
BLUE = \033[34m
YELLOW = \033[33m

# Source files
SRCS = main.c \
	./gnl/get_next_line.c \
	./gnl/get_next_line_utils.c \
	./parsing/check_ber.c \
	./parsing/check_args.c \
	./parsing/check_if_file.c \
	./parsing/check_map.c \
	./parsing/check_if_rectangle.c \
	./parsing/check_all.c \
	./printing/print_error.c \

OBJS = $(SRCS:.c=.o)

# Projetcs path
INC_PATH = ./includes
LIBFT_PATH = ./libft
MLX_PATH = ./mlx/mlxos/

NAME = so_long
RM = rm -f
OS_NAME = $(shell uname -s)

# Compilation rules
CC = clang
CFLAGS = -Wall -Werror -Wextra
MLX_FLAGS = -framework OpenGL -framework AppKit

ifeq ($(OS_NAME), Darwin)
	CFLAGS += -Imlx/mlxos
	MLX_PATH = ./mlx/mlxos

endif

ifeq ($(OS_NAME), Linux)
	CFLAGS += -Imlx/Linux
	MLX_PATH = ./mlx/Linux

endif

.c.o:
	$(CC) $(CFLAGS) -I$(MLX_PATH) -I$(INC_PATH) -c $< -o $@
	@echo "$(GREEN)--- Making objets files : $(YELLOW)$@ $(GREEN)---$(RESET)"

$(NAME): lib_libft lib_mlx $(OBJS)
	@echo "$(GREEN)--- Making the executable : $(YELLOW)$(NAME) $(GREEN)---$(RESET)"
	$(CC) $(CFLAGS) -Lmlx/mlxos -lmlx $(MLX_FLAGS) $(LIBFT_PATH)/libft.a $(OBJS) -o $(NAME)

lib_libft:
	@echo "Make LIBFT"
	make -C $(LIBFT_PATH)

lib_mlx:
	@echo "Make MLX"
	make -C $(MLX_PATH)

all: lib_libft lib_mlx $(NAME)

clean:
	make clean -C $(LIBFT_PATH)
	make clean -C $(MLX_PATH)
	$(RM) $(OBJS)
	@echo "$(RED)--- Objects files have been deleted. ---$(RESET)" 	

fclean: clean
	make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)
	@echo "$(RED)--- The executable $(YELLOW)$(NAME) $(RED)have been deleted. ---$(RESET)"

re: fclean all
	@echo "$(GREEN)--- Rebuilding everything ---$(RESET)"

.PHONY: all clean fclean re
