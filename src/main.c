/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:19 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 16:07:31 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_lenght + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}*/

int	main(int argc, char **argv)
{
	t_data data;
	t_elem	el;
	char	**map;

	init_structures(&data, &el);
	map = check_all(argc, argv, el);
	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
	{
		ft_putstr("Error : mlx_init\n");
		exit (EXIT_FAILURE);
	}
	data.win_ptr = mlx_new_window(data.mlx_ptr, WIDTH, HEIGHT, "so_long");
	if (!data.win_ptr)
	{
		ft_putstr("Error : mlx_new_window\n");
		free(data.mlx_ptr);
		exit (EXIT_FAILURE);
	}

	make_map(&data, map);
	//mlx_put_image_to_window(data.mlx_ptr, data.win_ptr, data.img, 0, 0);
	//make_map(&data, map);
	mlx_loop(data.mlx_ptr);
	return (0);
}
