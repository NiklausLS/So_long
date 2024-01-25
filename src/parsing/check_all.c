/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:47 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 18:59:07 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//to do
//check if the map is valid
//check if you can open i outside the file
//check if only one character/exit
//check if the side characters are only made of 1 OK
//check if there is a correct path

//i open a file, read it, join and split every part
//and return a tab of string
static char	**open_map(char *file)
{
	int		fd;
	char	*line;
	char	*str;
	char	**map;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_putstr("Error\nOpen K.O\n");
	line = "";
	str = ft_calloc(1, 1);
	while (line)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		str = ft_strjoin(str, line);
		free(line);
	}
	close(fd);
	map = ft_split(str, '\n');
	free(str);
	return (map);
}

void	check_all(int argc, char **argv)
{
	char	*file;
	char	**map;
	t_data	data;

	file = argv[1];
	map = NULL;
	//data = malloc(sizeof(t_data));
	printf("check_argc\n");
	check_argc(argc);
	printf("check_ber\n");
	check_ber(argv[1]);
	printf("check_if_file\n");
	check_if_file(file);

	map = open_map(file);
	check_elem(map);

	find_nbr_of_elem(map);
	
	//check_if_rectangle(map);
	//check_side_walls(map);
	//check_top_wall(map);
	//check_bottom_wall(map);

	printf("data.p = %d\n", data.p);
	printf("data.e = %d\n", data.e);
	printf("data.c = %d\n", data.c);

	puts("end of check_all\n");
	//free(map);
}
