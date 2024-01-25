/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:19 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 22:29:37 by nileempo         ###   ########.fr       */
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
	t_elements	nbr;

	init_structures(&data, &nbr);
	data.mlx_ptr = mlx_init();
	check_all(argc, argv, nbr);
	if (!data.mlx_ptr)
	{
		ft_putstr("Error : mlx_init\n");
		exit (EXIT_FAILURE);
	}
	data.window = mlx_new_window(data.mlx_ptr, 900, 600, "so_long");
	if (!data.window)
	{
		ft_putstr("Error : mlx_new_window\n");
		free(data.mlx_ptr);
		exit (EXIT_FAILURE);
	}
	
	//data.img = mlx_new_image(data.mlx_ptr, 900, 600);
	//data.addr = mlx_get_data_addr(data.img, &img.bits_per_pixel, 
	//			&img.line_lenght, &img.endian);

	//mlx_pixel_put(data.mlx, data.window, 1, 1, 0x0000FF);	
	//mlx_put_image_to_window(data.mlx, data.window, img.img, 0, 0);

	int x;
	int y;
	data.ground = mlx_xpm_file_to_image(data.mlx_ptr, "images/ground.xmp", &x, &y);
	mlx_loop(data.mlx_ptr);
	return (0);
}
