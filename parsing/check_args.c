/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:04 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/13 22:02:04 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//i check the numbers of arguments passed and send an error
//if there are more or less than the executable

int	check_argc(int argc)
{
	if (argc < 2)
	{
		ft_putstr("Error\nargc : K.O | Not enough arguments\n");
		return (-1);
	}
	else if (argc > 2)
	{
		ft_putstr("Error\argc : K.O | To many arguments\n");
		return (-1);
	}
	return (0);
}
