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
	@echo "$(GREEN)--- Making objets files : $(YELLOW)$@ $(GREEN)---$(RESET)"

$(NAME): $(OBJS)
	@echo "$(GREEN)--- Making the executable : $(YELLOW)$(NAME) $(GREEN)---$(RESET)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

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
