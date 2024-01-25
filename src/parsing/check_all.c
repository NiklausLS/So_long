/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:47 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 22:30:55 by nileempo         ###   ########.fr       */
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

void	check_all(int argc, char **argv, t_elements nbr)
{
	char	*file;
	char	**map;

	file = argv[1];
	map = NULL;
	//data = malloc(sizeof(t_data));
	printf("check_argc\n");
	check_argc(argc);
	printf("check_ber\n");
	check_ber(argv[1]);
	printf("check_if_file\n");
	check_if_file(file);
	printf("open_map\n");
	map = open_map(file);
	printf("check_elem\n");
	check_elem(map);
	printf("find_nbr_of_elem\n");
	find_nbr_of_elem(map, &nbr);
	printf("check_if_rectangle\n");
	check_if_rectangle(map);
	printf("check_side_walls\n");
	check_side_walls(map);
	printf("check_top_wall\n");
	check_top_wall(map);
	printf("check_bottom_wall\n");
	check_bottom_wall(map);
	
	puts("end of check_all\n");
	//free(map);
}
