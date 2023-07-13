/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:47 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/13 13:56:26 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//use all my checkings functions at once
//check argc OK
//check .BER OK
//check if the file can be open
//check if it is a file and not an repertory

//to do
//check if the map is valid
//check if you can open i outside the file
//check if only one character/exit

static char	**open_map(char *file)
{
	int		fd;
	char	*line;
	char	*str;
	char	**map;
	int		i;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		write (1, "OPEN ERROR\n", 11);
	line = "";
	str = ft_calloc(1, 1);
	i = 0;
	while (line)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		str = ft_strjoin(str, line);
		free(line);
		i++;
	}
//	printf("str = %s\n", str);
	close(fd);
	map = ft_split(str, '\n');
	free(str);
//	system("leaks so_long");
	return (map);
}

void	check_all(int argc, char **argv)
{
	char	*file;
	char	**map;

	file = argv[1];
	map = NULL;
	check_argc(argc);
	check_ber(argv[1]);
	check_if_file(file);

	map = open_map(file);
//	puts("avant check_elem");
	printf("--- map --- \n");
	check_elem(map);
	puts("END");
//	free(map);
}
