/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:58:02 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/09 00:15:45 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Manage keyboard key
 * @param int key : keyboard key
 * @param t_data *data : ptr to my data structure
 * @return : return 0 if everything is ok
*/
int key_hook(int key, t_data *data)
{
    printf("key pressed = %d\n", key);
    printf("KEY HOOK : player is at %d, %d\n", data->p_row, data->p_col);
    if (key == ESC_KEY)
        close_game(data);
    if (key == UP_KEY)
    {
        printf("BEFORE KEY HOOK %d, %d\n", data->p_row, data->p_col);
        move_up(data);
        printf("AFTER KEY HOOK %d, %d\n", data->p_row, data->p_col);
    }
    if (key == DOWN_KEY)
    {
        printf("Down_key\n");
        move_down(data);
    }
    if (key == LEFT_KEY)
    {
        printf("Left_key\n");
        move_left(data);
    }
    if (key == RIGHT_KEY)
    {
        printf("Right_key\n");
        move_right(data);
    }
    return (0);
}