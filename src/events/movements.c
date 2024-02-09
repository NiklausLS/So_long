/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:35 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 20:15:15 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	move_up(t_data *data)
{
	if (data->p_row >= 1 && data->map[data->p_row - 1][data->p_col] != '1')
	{
		if (data->p_row >= 1 && data->map[data->p_row - 1][data->p_col] == 'E'
			&& data->c != 0)
			return (-1);
		if (data->p_row >= 1 && data->map[data->p_row - 1][data->p_col] == 'E'
			&& data->c == 0)
			close_game(data);
		if (data->map[data->p_row - 1][data->p_col] == 'C')
			data->c = 0;
		data->map[data->p_row][data->p_col] = '0';
		data->p_row = data->p_row - 1;
		data->map[data->p_row][data->p_col] = 'P';
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		make_map(data, data->map);
		data->move += 1;
	}
	return (0);
}

int	move_down(t_data *data)
{
	if (data->p_row >= 1 && data->p_row < (data->rows - 2)
		&& data->map[data->p_row + 1][data->p_col] != '1')
	{
		if (data->p_row >= 1 && data->map[data->p_row + 1][data->p_col] == 'E'
			&& data->c != 0)
			return (-1);
		if (data->p_row >= 1 && data->map[data->p_row + 1][data->p_col] == 'E'
			&& data->c == 0)
			close_game(data);
		if (data->map[data->p_row + 1][data->p_col] == 'C')
			data->c = 0;
		data->map[data->p_row][data->p_col] = '0';
		data->p_row = data->p_row + 1;
		data->map[data->p_row][data->p_col] = 'P';
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		make_map(data, data->map);
		data->move += 1;
	}
	return (0);
}

int	move_left(t_data *data)
{
	if (data->p_col > 1 && data->map[data->p_row][data->p_col - 1] != '1')
	{
		if (data->p_row >= 1 && data->map[data->p_row][data->p_col - 1] == 'E'
			&& data->c != 0)
			return (-1);
		if (data->p_row >= 1 && data->map[data->p_row][data->p_col - 1] == 'E'
			&& data->c == 0)
			close_game(data);
		if (data->map[data->p_row][data->p_col - 1] == 'C')
			data->c = 0;
		data->map[data->p_row][data->p_col] = '0';
		data->p_col = data->p_col - 1;
		data->map[data->p_row][data->p_col] = 'P';
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		make_map(data, data->map);
		data->move += 1;
	}
	return (0);
}

int	move_right(t_data *data)
{
	if (data->p_col < (data->cols - 2)
		&& data->map[data->p_row][data->p_col + 1] != '1')
	{
		if (data->p_row >= 1 && data->map[data->p_row][data->p_col + 1] == 'E'
			&& data->c != 0)
			return (-1);
		if (data->p_row >= 1 && data->map[data->p_row][data->p_col + 1] == 'E'
			&& data->c == 0)
			close_game(data);
		if (data->map[data->p_row][data->p_col + 1] == 'C')
			data->c = 0;
		data->map[data->p_row][data->p_col] = '0';
		data->p_col = data->p_col + 1;
		data->map[data->p_row][data->p_col] = 'P';
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		make_map(data, data->map);
		data->move += 1;
	}
	return (0);
}
