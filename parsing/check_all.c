#include "../so_long.h"

//use all my checkings functions at once

void	check_all(int argc, char **argv)
{
	//char *str = *argv;
	check_argc(argc);
	check_ber(argv[1]);
}
