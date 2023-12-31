/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:26 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/14 11:44:41 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_if_file(char *str)
{
	int	fd;

	fd = open(str, O_DIRECTORY);
	if (fd != -1)
	{
		ft_putstr("Error\nNot a file\n");
		return (-1);
	}
	return (0);
}
