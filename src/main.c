/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:19 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 19:02:15 by nileempo         ###   ########.fr       */
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
	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
	{
		ft_putstr_fd("Error : mlx_init\n", 2);
		exit (EXIT_FAILURE);
	}
	data.win_ptr = mlx_new_window(data.mlx_ptr, WIDTH, HEIGHT, "so_long");
	if (!data.win_ptr)
	{
		ft_putstr_fd("Error : mlx_new_window\n", 2);
		free(data.mlx_ptr);
		exit (EXIT_FAILURE);
	}
	init_textures(&data);
	printf("height = %d\n", data.height);
	printf("width = %d\n", data.width);
	printf("map = %s\n", *map);
	//data.img = mlx_new_image(data.mlx_ptr, data.height * 32, data.width * 32);
	make_map(&data, map);
	mlx_loop(data.mlx_ptr);
	return (0);
}
