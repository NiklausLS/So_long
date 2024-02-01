/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:19 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 23:47:18 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int argc, char **argv)
{
	t_data data;
	t_elem	el;
	char	**map;

	init_structures(&data, &el);
	map = check_all(argc, argv, &el, &data);
	/*
	int i = 0;
	int j = 0;
	while(map[j][i])
	{
		j = 0;
		while(map[j][i])
		{
			printf("%c", map[j][i]);
			i++;
		}
		j++;
	}*/
	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
	{
		ft_putstr_fd("Error : mlx_init\n", 2);
		exit (EXIT_FAILURE);
	}
	data.win_ptr = mlx_new_window(data.mlx_ptr, data.width * 32, data.height * 32, "so_long");
	if (!data.win_ptr)
	{
		ft_putstr_fd("Error : mlx_new_window\n", 2);
		free(data.mlx_ptr);
		exit (EXIT_FAILURE);
	}
	init_textures(&data);
	data.img = mlx_new_image(data.mlx_ptr, data.height * TILE_SIZE, data.width * TILE_SIZE);
	make_map(&data, map);
	mlx_hook(data.win_ptr, 17, 1L << 17, close_game, &data);
	mlx_loop(data.mlx_ptr);
	return (0);
}
