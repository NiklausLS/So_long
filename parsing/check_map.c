/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:10:11 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/13 11:51:43 by nileempo         ###   ########.fr       */
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
	char *str;

	i = 0;
	str = file;
	printf("--- check_elem ---\n");
	//printf("elem is : %s\n", file);
	while (str[i])
	{
		if (str[i] != 'P' && str[i] != 'E' && str[i] != 'C'
			&& str[i] != '1' && str[i] != '0')
		{
			printf ("str[i] = %c\n", str[i]);
			printf ("character is incorrect\n");
			break ;
			return (-1);
		}
		else
		{
			printf("str[i] = %c\n", str[i]);
			i++;
		}
	}
	return (0);
}

