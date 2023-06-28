#include "../so_long.h"

//i have to check if the file finish with .ber

//and i have to check if im opening a file

int	check_ber(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	if (str[i - 4] == '.' && str[i - 3] == 'b' && str[i - 2] == 'e'
		&& str[i - 1] == 'r')
	{
		printf(".ber OK\n");
		//so OPEN
		return (0);	
	}
	else
		printf(".ber PAS OK\n");
		return (-2);
	return (0);
}
