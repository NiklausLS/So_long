/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:50 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/07 06:24:55 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//ill send and error message depending of the number i get in param

void	print_error(int check)
{
	if (check < 0)
		write(1, "Error\n", 6);
	if (check == -2)
	write(1, "Not .ber\n", 9);
}
