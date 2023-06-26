SRCS = main.c  

RESET = \033[0m
GREEN = \033[32m
RED = \033[31m
BLUE = \033[34m
YELLOW = \033[33m

NAME = so_long

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	@echo "$(YELLOW)Making objets files : $(GREEN)$@ $(RESET)"

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS) 	

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
