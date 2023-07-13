/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:10:11 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/13 09:44:28 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//i have to check if the map is OK

//i need :
//1 P
//1 E
//1 C
//walls all around
//0 for empty spaces 
//
//so the map can only contain P E C 1 0

int	check_elem(char *file)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("--- check_elem ---\n");
	printf("elem is : %c\n", file[j++]);
	while (file[i])
	{
		if (file[i] != 'P' && file[i] != 'E' && file[i] != 'C'
				&& file[i] != '1' && file[i] != '0')
		{
			printf ("character is incorrect\n");
			return (-1);
		}
		else
		{
			printf("file[i] = %d\n", file[i]);
			i++;
		}
	}
	return (0);
}

