/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:36:57 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/10 14:59:58 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

//i want to check the position of my elements in the map
//and fill it with the right images

//1-Opening the map
//2-Checking the position of the elements

void	init_map(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	printf("fd = %d\n", fd);
	if (fd == -1)
		printf("FD ERROR\n");
	



	}

}
