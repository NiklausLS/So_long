# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 06:22:55 by nileempo          #+#    #+#              #
#    Updated: 2023/07/13 12:35:22 by nileempo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c \
	./gnl/get_next_line.c \
	./gnl/get_next_line_utils.c \
	./parsing/check_ber.c \
	./parsing/check_args.c \
	./parsing/check_if_file.c \
	./parsing/check_map.c \
	./parsing/check_all.c \
	./printing/print_error.c \
	./utils/ft_memset.c \
	./utils/ft_bzero.c \
	./utils/ft_calloc.c \
	./utils/ft_substr.c \
	./utils/ft_split.c

RESET = \033[0m
GREEN = \033[32m
RED = \033[31m
BLUE = \033[34m
YELLOW = \033[33m

NAME = so_long

CC = gcc

CFLAGS = -Wall -Werror -Wextra

MLXFLAGS =  -I /usr/local/include -g -L /usr/local/lib/ -lmlx -framework OpenGL -framework AppKit

RM = rm -f

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -Imlx -c $< -o $(<:.c=.o)
	@echo "$(GREEN)--- Making objets files : $(YELLOW)$@ $(GREEN)---$(RESET)"

$(NAME): $(OBJS)
	@echo "$(GREEN)--- Making the executable : $(YELLOW)$(NAME) $(GREEN)---$(RESET)"
	$(CC) $(CFLAGS) $(MLXFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	@echo "$(RED)--- Objects files have been deleted. ---$(RESET)" 	

fclean: clean
	$(RM) $(NAME)
	@echo "$(RED)--- The executable $(YELLOW)$(NAME) $(RED)have been deleted. ---$(RESET)"

re: fclean all
	@echo "$(GREEN)--- Rebuilding everything ---$(RESET)"

.PHONY: all clean fclean re
