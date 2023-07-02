#include "../so_long.h"

int	check_if_file(char **argv)
{
	int	fd;
	
	printf("test check if file");
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(1, "FILE NOT OK\n", 12);
		return (fd);
	}
	else 
		write (1, "FILE OK\n", 8);
	printf("FD = %d\n", fd); 
	return (1);
}


