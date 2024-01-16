/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:19 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/14 11:34:45 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_lenght + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(int argc, char **argv)
{
	void	*mlx;
	void	*window;
	t_data	img;

	check_all(argc, argv);

	mlx = mlx_init();
	window = mlx_new_window(mlx, 900, 600, "so_long");

	img.img = mlx_new_image(mlx, 900, 600);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, 
				&img.line_lenght, &img.endian);

	my_mlx_pixel_put(&img, 5, 5, 0x00FF0000);
		
	mlx_put_image_to_window(mlx, window, img.img, 5, 5);
	mlx_loop(mlx);
	return (0);
}
