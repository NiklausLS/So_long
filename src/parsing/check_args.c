/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:04 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/31 09:41:38 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//check the nbr of arguments
int	check_argc(int argc)
{
	if (argc < 2)
	{
		ft_putstr_fd("Error\nARGC: not enough arguments\n", 2);
		exit (EXIT_FAILURE);
	}
	else if (argc > 2)
	{
		ft_putstr_fd("Error\nARGC: to many arguments\n", 2);
		exit (EXIT_FAILURE);
	}
	return (0);
}

//check if the file passed as argument finish by .ber
int	check_ber(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (str[i - 4] != '.' || str[i - 3] != 'b' || str[i - 2] != 'e'
		|| str[i - 1] != 'r')
	{
		ft_putstr_fd("Error\nARGC: doesn't end with .ber\n", 2);
		exit (EXIT_FAILURE);
	}
	return (0);
}

//check if the arg is a file
int	check_if_file(char *str)
{
	int	fd;

	fd = open(str, O_DIRECTORY);
	if (fd != -1)
	{
		ft_putstr_fd("Error\nARGC: not a file\n", 2);
		exit (EXIT_FAILURE);
	}
	return (0);
}
