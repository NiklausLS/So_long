/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:14 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/16 18:23:50 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_ber(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (str[i - 4] != '.' || str[i - 3] != 'b' || str[i - 2] != 'e'
		|| str[i - 1] != 'r')
	{
		ft_putstr("Error\n.ber K.O\n");
		return (-1);
	}
	return (0);
}
