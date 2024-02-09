/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:47 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 19:27:02 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Open a file, read it, join and split every part of it
 * @param (char *file) string
 * @return an array of string
 */
static char	**open_map(char *file)
{
	int		fd;
	char	*line;
	char	*tmp;
	char	**map;

	fd = ft_open_file(file);
	line = NULL;
	tmp = ft_calloc(1, 1);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		tmp = ft_strjoin(tmp, line);
		free(line);
	}
	close(fd);
	map = ft_split(tmp, '\n');
	free(tmp);
	return (map);
}

char	**dup_map(char **map, t_data *data)
{
	char	**map2;
	int		i;

	i = 0;
	if (map == NULL)
		return (NULL);
	map2 = (char **)malloc(sizeof(char *) * (data->height + 1));
	if (map2 == NULL)
		return (NULL);
	while (i < data->height && map[i])
	{
		map2[i] = ft_strdup(map[i]);
		i++;
	}
	map2[i] = NULL;
	return (map2);
}

//call all my test and return a map if they all pass
char	**check_map(int argc, char **argv, t_data *data)
{
	char	*file;
	char	**map2;

	if (!data)
		ft_errorexit("Error\nMemory allocation failed\n");
	file = argv[1];
	check_argc(argc);
	data->map = open_map(file);
	if (!data->map)
		ft_errorexit("Error\nMemory allocation failed\n");
	if (!data)
		ft_errorexit("Error\nMemory allocation failed\n");
	check_size(data->map, data);
	map2 = dup_map(data->map, data);
	check_form(map2);
	check_elem(map2);
	check_collectible(map2, data);
	check_exit(map2, data);
	check_player(map2, data);
	check_nbr_of_elem(data);
	check_side_walls(map2);
	check_top_wall(map2);
	check_bottom_wall(map2);
	ft_free_array(map2);
	return (data->map);
}
