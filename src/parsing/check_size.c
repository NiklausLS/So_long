/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:29:13 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/01 14:25:05 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

//check the size of my map and stock it
int	check_size(char *file, t_elem *el)
{
	int	i;

	i = 0;
	while (file[i])
		i++;
	el->rows = i;
	i = 0;
	while (file[i])
		i++;
	el->cols = i;
	if (el->rows == el->cols)
	{
		ft_putstr_fd("Error\nMap: this is a square", 2);
		exit(EXIT_FAILURE);
	}
	if (el->rows < 3)
	{
		ft_putstr_fd("Error\nMap: not enought rows", 2);
		exit(EXIT_FAILURE);
	}
	if (el->cols < 3)
	{
		ft_putstr_fd("Error\nMap: not enough columns", 2);
	}
	return (0);
}
