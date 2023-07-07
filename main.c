/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:23:19 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/07 07:02:32 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{	
	/*char *f1;
	char *f2;
	int	i;
	int	j;
	
	f1 = "--- checking test.ber";
	printf("%s\n", f1);
	i = check_ber(f1);
	print_error(i);

	f2 = "--- checking test.br";
	printf("%s\n", f2);
	j = check_ber(f2);
	print_error(j);
//	printf("---- Makefile test ----\n");*/

	check_all(argc, argv);	
	return (0);
}
