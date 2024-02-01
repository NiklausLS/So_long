/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:47 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 23:15:30 by nileempo         ###   ########.fr       */
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
	char	*tmp;
	char	**map;

	fd = ft_open_file(file);
	line = NULL;
	tmp = ft_calloc(1, 1);
	while ((line = get_next_line(fd)) != NULL)
	{
		tmp = ft_strjoin(tmp, line);
		free(line);
	}
	close(fd);
	map = ft_split(tmp, '\n');
	free(tmp);
	return (map);
}

//call all my test and return a map if they all pass
char	**check_all(int argc, char **argv, t_elem *el, t_data *data)
{
	char	*file;
	char	**map;

	file = argv[1];
	check_argc(argc);
	printf("open_map\n");
	map = open_map(file);
	printf("check_elem\n");
	check_elem(map);
	check_collectible(map, el);
	check_exit(map, el);
	check_character(map, el);
	check_nbr_of_elem(el);
	printf("check_side_walls\n");
	check_side_walls(map);
	printf("check_top_wall\n");
	check_top_wall(map);
	printf("check_bottom_wall\n");
	check_bottom_wall(map);
	check_size(map, data);
	return (map);
}
