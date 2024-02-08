/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:04 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/03 15:48:52 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

/*
 * Check the nbr of arguments
 * @param argc
 * @return 0 if the function worked
 */
int	check_argc(int argc)
{
	if (argc < 2)
		ft_errorexit("Error\nARGC: not enough arguments\n");
	else if (argc > 2)
		ft_errorexit("Error\nARGC: to many arguments\n");
	return (0);
}

/*
 * check if the file passed as parameter finish by .ber
 * @param char *str : the file
 * @return 0 if the function worked
 */
int	check_ber(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (str[i - 4] != '.' || str[i - 3] != 'b' || str[i - 2] != 'e'
		|| str[i - 1] != 'r')
		ft_errorexit("Error\nARGC: doesn't end with .ber\n");
	return (0);
}

/* 
 * Check if parameter is a file
 * @param char *str : the file
 * @return 0 if the function worked
 */
int	check_if_file(char *str)
{
	int	fd;

	fd = open(str, O_DIRECTORY);
	if (fd != -1)
		ft_errorexit("Error\nARGC: not a file\n");
	return (0);
}
