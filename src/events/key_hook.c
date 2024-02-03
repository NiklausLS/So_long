/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:58:02 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/03 14:45:21 by nileempo         ###   ########.fr       */
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
    if (key == ESC_KEY)
        close_game(data);
    return (0);
}