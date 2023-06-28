#include "so_long.h"

int	main()
{	
	char *f1;
	char *f2;

	f1 = "test.ber";
	f2 = "test.br";

	check_ber(f1);
	check_ber(f2);
//	printf("---- Makefile test ----\n");	
	return (0);
}
