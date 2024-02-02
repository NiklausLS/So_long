/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:58:02 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/02 19:16:45 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//manage all the key i need to play
int key_hook(int key, t_data *data)
{
    if (key == ESC_KEY)
        close_game(data);
    return (0);
}