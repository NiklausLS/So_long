#include "../so_long.h"

//use all my checkings functions at once

//check argc OK
//check .BER OK

//to do list
//check if the file can be open
//check if it is a file and not an repertory
//check if the map is valid


void	check_all(int argc, char **argv)
{;
	check_argc(argc);
	check_ber(argv[1]);
	check_if_file(&argv[1]);
}
