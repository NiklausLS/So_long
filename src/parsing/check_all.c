/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:47 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/08 23:56:31 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//to do
//check if the map is valid
//check if you can open i outside the file
//check if only one character/exit
//check if the side characters are only made of 1 OK
//check if there is a correct path

/* Open a file, read it, join and split every part of it
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

char	**dup_map(char **map, t_data *data)
{
	char	**map2;
	int		i;
	int		j;

	i = 0;
	if (map == NULL)
		return (NULL);
	map2 = (char **)malloc(sizeof(char *) * (data->height + 1));
	if (map2 == NULL)
		return (NULL);
	while (i < data->height && map[i])
	{
		map2[i] = ft_strdup(map[i]);
		if (map2[i] == NULL)
		{
			j = 0;
			while (j < i)
			{
				free(map2[j]);
				j++;
			}
			free(map2);
			return (NULL);
		}
		i++;
	}
	map2[i] = NULL;
	return (map2);
}

// temporary print_map
void	print_map(char **map)
{
	int	i = -1;

	while (map[++i])
		printf("map[%.2d]%s\n", i, map[i]);
	return ;
}

//call all my test and return a map if they all pass
char	**check_map(int argc, char **argv, t_data *data)
{
	char	*file;
	//char	**map;
	char	**map2;

	if (!data)
		ft_errorexit("Error\nMemory allocation failed\n");
	file = argv[1];
	check_argc(argc);
	data->map = open_map(file);
	print_map(data->map);
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
/*
	printf("PLAYER : p_row = %d, p_col = %d\n", data->p_row, data->p_col);
	printf("COLLECTIBLE : c_row = %d, c_col = %d\n", data->c_row, data->c_col);
	printf("EXIT : e_row = %d, e_col = %d\n", data->e_row, data->e_col);
	printf("c_ok = %d\n", data->c_ok);
	printf("e_ok = %d\n", data->e_ok);

	puts("map1\n");
	print_map(map);
	puts("map2\n");

	print_map(map2);
	flood_fill(map2, data->p_row, data->p_col, data);
	puts("map2 après\n");

	print_map(map2);
	check_fill(map2, data);
	printf("c_ok = %d\n", data->c_ok);
	printf("e_ok = %d\n", data->e_ok);
	*/
	ft_free_array(map2);
	return (data->map);
}
