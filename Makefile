# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 06:22:55 by nileempo          #+#    #+#              #
#    Updated: 2024/01/25 22:18:54 by nileempo         ###   ########.fr        #
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
	./src/initialisation.c \
	./src/free_structures.c \
	./src/parsing/check_ber.c \
	./src/parsing/check_args.c \
	./src/parsing/check_if_file.c \
	./src/parsing/check_map.c \
	./src/parsing/check_if_rectangle.c \
	./src/parsing/check_all.c \
	./src/printing/print_error.c \
	./src/textures/textures.c \

OBJS = $(SRCS:.c=.o)

# Projetcs path
INC_PATH = ./includes
LIBFT_PATH = ./libft
MLX_PATH = ./mlx/mlxos/

NAME = so_long
RM = rm -f
#OS_NAME = $(shell uname -s)

# Compilation rules
CC = clang
CFLAGS = -Wall -Werror -Wextra -Imlx/mlxos
MLX_FLAGS = -framework OpenGL -framework AppKit

#ifeq ($(OS_NAME), Darwin)
##	MLX_PATH = ./mlx/mlxos

#endif

#ifeq ($(OS_NAME), Linux)
#	CFLAGS += -Imlx/linux
#	MLX_PATH = ./mlx/linux

#endif

.c.o:
	$(CC) $(CFLAGS) -I$(MLX_PATH) -I$(INC_PATH) -c $< -o $@
	@echo "$(GREEN)--- Making objets files : $(YELLOW)$@ $(GREEN)---$(RESET)"

$(NAME): $(OBJS)
	make -C $(LIBFT_PATH)
	make -C $(MLX_PATH)
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
