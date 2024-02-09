/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:35 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 00:56:20 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	print_map(char **map)
{
	int	i = -1;

	while (map[++i])
		printf("map[%.2d]%s\n", i, map[i]);
	return ;
}

int	move_up(t_data *data)
{
    print_map(data->map);
    printf("move up\n");
    printf("data->p_row = %d\n", data->p_row);
    printf("data->rows = %d\n", data->rows);
    printf("data->cols = %d\n", data->cols);
    if (data->p_row > 1 && data->map[data->p_row - 1][data->p_col] != '1')
    {
        data->map[data->p_row][data->p_col] = '0';
        data->p_row = data->p_row - 1; 
        data->map[data->p_row][data->p_col] = 'P';
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		make_map(data, data->map);
        print_map(data->map);
    }
    return (0);
}

int	move_down(t_data *data)
{
    if (data->p_row > 1 && data->p_row < (data->rows - 2)
		&& data->map[data->p_row + 1][data->p_col] != '1')
    {
        data->map[data->p_row][data->p_col] = '0';
        data->p_row = data->p_row + 1;
        data->map[data->p_row][data->p_col] = 'P';
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		make_map(data, data->map);
		print_map(data->map);
    }
    return (0);
}

int	move_left(t_data *data)
{
	if (data->p_col > 1 && data->map[data->p_row][data->p_col - 1] != '1')
	{
		data->map[data->p_row][data->p_col] = '0';
        data->p_col = data->p_col - 1;
        data->map[data->p_row][data->p_col] = 'P';
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		make_map(data, data->map);
        print_map(data->map);
    }
    return (0);
}

int	move_right(t_data *data)
{
	if (data->p_col < (data->cols - 2) && data->map[data->p_row + 1][data->p_col] != '1')
	{
		data->map[data->p_row][data->p_col] = '0';
        data->p_col = data->p_col + 1;
        data->map[data->p_row][data->p_col] = 'P';
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		make_map(data, data->map);
        print_map(data->map);
    }
    return (0);
}
