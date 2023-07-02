#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdio.h>

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv);
int	check_ber(char *str);
int	check_argc(int argc);
int	check_if_file(char **argv);
void	check_all(int argc, char **argv);
void	print_error(int check);

#endif
