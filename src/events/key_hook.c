/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:58:02 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 20:49:21 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Manage keyboard key
 * @param int key : keyboard key
 * @param t_data *data : ptr to my data structure
 * @return : return 0 if everything is ok
*/
int	key_hook(int key, t_data *data)
{
	int	tmp;

	tmp = 0;
	tmp = data->move;
	if (key == ESC_KEY)
		close_game(data);
	if (key == UP_KEY)
		move_up(data);
	if (key == DOWN_KEY)
		move_down(data);
	if (key == LEFT_KEY)
		move_left(data);
	if (key == RIGHT_KEY)
		move_right(data);
	if (tmp != data->move)
	{
		ft_putnbr(data->move);
		ft_putchar('\n');
	}
	return (0);
}
