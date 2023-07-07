/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:04 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/07 06:24:08 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//i check the numbers of arguments passed and sent an error
//if there is more or less than the executable

int	check_argc(int argc)
{
	if (argc != 2)
	{
		write (1, "ARGC ERROR\n", 11);
		return (-3);
	}
	else
		return (0);
}
/*
int main(int argc, char **argv)
{	
	check_argc(argc);
	printf("argv[1] = %s\n", argv[1]);	
}*/
