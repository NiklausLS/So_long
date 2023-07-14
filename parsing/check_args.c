/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:04 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/14 11:28:42 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//i check the numbers of arguments passed and sent an error
//if there is more or less than the executable

void	check_argc(int argc)
{
	if (argc < 2)
		ft_putstr("Error\nargc : K.O | Not enough arguments\n");
	else if (argc > 2)
		ft_putstr("Error\nargc : K.O | To many arguments\n");
}
