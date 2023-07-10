/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:47 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/10 14:59:29 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//use all my checkings functions at once
//check argc OK
//check .BER OK
//check if the file can be open
//check if it is a file and not an repertory

//to do
//check if the map is valid
//check if you can open i outside the file
//check if only one character/exit

void	open_map(char *file)
{
	int	fd;

	fd = 1;
	fd = open(file, O_RDONLY);
	printf("opem_map fd = %d\n", fd);
	if (fd == -1)
		write (1, "OPEN ERROR\n", 11);
}

void	check_all(int argc, char **argv)
{
	char	*file;

	file = argv[1];
	check_argc(argc);
	check_ber(argv[1]);
	check_if_file(file);
	open_map(file);
}
