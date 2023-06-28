#include "../so_long.h"

//i have to check if the file finish with .ber

//and i have to check if im opening a file

void	check_ber(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	if (str[i - 4] == '.' && str[i - 3] == 'b' && str[i - 2] == 'e'
		&& str[i - 1] == 'r')
	{
		printf(".ber OK\n");
		//Contain so OK
		//so OPEN		
	}
	else
		printf(".ber PAS OK\n");
		//error
}
