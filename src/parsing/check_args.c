/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:04 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/02 10:07:48 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//check the nbr of arguments
int	check_argc(int argc)
{
	if (argc < 2)
		ft_errorexit("Error\nARGC: not enough arguments\n");
	else if (argc > 2)
		ft_errorexit("Error\nARGC: to many arguments\n");
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
		ft_errorexit("Error\nARGC: doesn't end with .ber\n");
	return (0);
}

//check if the arg is a file
int	check_if_file(char *str)
{
	int	fd;

	fd = open(str, O_DIRECTORY);
	if (fd != -1)
		ft_errorexit("Error\nARGC: not a file\n");
	return (0);
}
