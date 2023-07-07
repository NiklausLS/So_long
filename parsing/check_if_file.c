/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:26 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/07 07:15:41 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_if_file(char *str)
{
	int	fd;

	printf("--- test check if file ---\n");
	fd = open(str, O_DIRECTORY);
	printf("argv[1] = %s\nfd = %d\n", str, fd);
	if (fd < 0)
	{
		write(1, "FILE OK\n", 8);
		return (fd);
	}
	else
		write (1, "FILE KO\n", 8);
	return (1);
}
