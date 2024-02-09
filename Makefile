# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 06:22:55 by nileempo          #+#    #+#              #
#    Updated: 2024/02/09 22:35:47 by nileempo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Text colors
RESET = \033[0m
GREEN = \033[32m
RED = \033[31m
BLUE = \033[34m
YELLOW = \033[33m

# Source files
SRCS = ./src/main.c \
	./gnl/get_next_line.c \
	./gnl/get_next_line_utils.c \
	./src/inits/init_structs.c \
	./src/inits/init_map.c \
	./src//freeing/free_structures.c \
	./src/parsing/check_args.c \
	./src/parsing/check_elements.c \
	./src/parsing/check_walls.c \
	./src/parsing/check_path.c \
	./src/parsing/check_all.c \
	./src/parsing/check_size.c \
	./src/textures/textures.c \
	./src/textures/get_textures.c \
	./src/events/close_game.c \
	./src/events/key_hook.c \
	./src/events/movements.c \

OBJS = $(SRCS:.c=.o)

# Projetcs path
INC_PATH = ./includes
LIBFT_PATH = ./libft
MLX_PATH = ./mlx/mlxos/

NAME = so_long
RM = rm -f
OS_NAME = $(shell uname -s)

# Compilation rules
CC = gcc
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address

# Compilation flags 
ifeq ($(OS_NAME), Darwin)
	CFLAGS += -Imlx/mlxos
	MLX_PATH = ./mlx/mlxos
	MLX_FLAGS = -framework OpenGL -framework AppKit
endif

ifeq ($(OS_NAME), Linux)
	CFLAGS += -Imlx/mlxlinux 
	MLX_PATH = ./mlx/mlxlinux
	MLX_FLAGS = -lXext -lX11 -lm
endif

.c.o:
	$(CC) $(CFLAGS) -I$(MLX_PATH) -I$(INC_PATH) -c $< -o $@
	@echo "$(GREEN)--- Making objets files : $(YELLOW)$@ $(GREEN)---$(RESET)"

ifeq ($(OS_NAME), Darwin)
$(NAME): $(OBJS)
	make -C $(LIBFT_PATH)
	make -C $(MLX_PATH)
	@echo "$(GREEN)--- Making the executable : $(YELLOW)$(NAME) $(GREEN)---$(RESET)"
	$(CC) $(CFLAGS) -Lmlx/mlxos -lmlx $(MLX_FLAGS) $(LIBFT_PATH)/libft.a $(OBJS) -o $(NAME)
endif

ifeq ($(OS_NAME), Linux)
$(NAME): $(OBJS)
	make -C $(LIBFT_PATH)
	make -C $(MLX_PATH)
	@echo "$(GREEN)--- Making the executable : $(YELLOW)$(NAME) $(GREEN)---$(RESET)"
	$(CC) $(CFLAGS) -Lmlx/mlxlinux -lmlx $(MLX_FLAGS) $(LIBFT_PATH)/libft.a $(OBJS) -o $(NAME)
endif

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
