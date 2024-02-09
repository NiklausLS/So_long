/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:19 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 19:52:07 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int argc, char **argv)
{
	t_data	*data;
	char	**map;

	data = (t_data *)malloc(sizeof(t_data));
	if (!data)
		ft_errorexit("Error\nMemory allocation failed\n");
	init_struct_data(data);
	map = check_map(argc, argv, data);
	data->mlx_ptr = mlx_init();
	if (!data->mlx_ptr)
		ft_errorexit("Error : mlx_init\n");
	data->win_ptr = mlx_new_window(data->mlx_ptr,
			data->width * 32, data->height * 32, "so_long");
	if (!data->win_ptr)
		ft_errorexit("Error : mlx_new_window\n");
	init_textures(data);
	data->img = mlx_new_image(data->mlx_ptr,
			data->width * 32, data->height * 32);
	make_map(data, map);
	mlx_hook(data->win_ptr, 2, 0, key_hook, data);
	mlx_hook(data->win_ptr, 17, 1L << 17, close_game, data);
	mlx_loop(data->mlx_ptr);
	free(data);
	return (0);
}
