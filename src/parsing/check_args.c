/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:04 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 18:33:03 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//i check the numbers of arguments passed and send an error
//if there are more or less than the executable

int	check_argc(int argc)
{
	if (argc < 2)
	{
		ft_putstr("Error\nargc : K.O | Not enough arguments\n");
		exit (EXIT_FAILURE);
	}
	else if (argc > 2)
	{
		ft_putstr("Error\nargc : K.O | To many arguments\n");
		exit (EXIT_FAILURE);
	}
	return (0);
}
