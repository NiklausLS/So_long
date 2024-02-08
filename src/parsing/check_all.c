/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:47 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/08 14:58:58 by nileempo         ###   ########.fr       */
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

static char	**dup_map(char **map, t_data *data)
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

//call all my test and return a map if they all pass
char	**check_map(int argc, char **argv, t_elem *el, t_data *data)
{
	char	*file;
	char	**map;
	char	**map2;

	file = argv[1];
	check_argc(argc);
	map = open_map(file);
	check_size(map, data);
	map2 = dup_map(map, data);
	check_form(map2);
	check_elem(map2);
	check_collectible(map2, el);
	check_exit(map2, el);
	check_player(map2, el);
	check_nbr_of_elem(el);
	check_side_walls(map2);
	check_top_wall(map2);
	check_bottom_wall(map2);

	printf("PLAYER : p_row = %d, p_col = %d\n", el->p_row, el->p_col);
	printf("COLLECTIBLE : c_row = %d, c_col = %d\n", el->c_row, el->c_col);
	printf("EXIT : e_row = %d, e_col = %d\n", el->e_row, el->e_col);
	printf("c_ok = %d\n", el->c_ok);
	printf("e_ok = %d\n", el->e_ok);
	int		i = 0;
	puts("map1\n");
	while (map[i])
	{
		printf("%s\n", map[i]);
		i++;
	}
	puts("map2\n");
	i = 0;
	while (map2[i])
	{
		printf("%s\n", map2[i]);
		i++;
	}
	flood_fill(map2, el->p_row, el->p_col, data);
	puts("map2 après\n");
	i = 0;
	while (map2[i])
	{
		printf("%s\n", map2[i]);
		i++;
	}
	check_fill(map2, el);
	puts("blabla");
	printf("c_ok = %d\n", el->c_ok);
	printf("e_ok = %d\n", el->e_ok);
	//ft_free_array(map);
	//ft_free_array(map2);
	return (map);
}
