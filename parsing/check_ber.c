/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:14 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/07 06:31:33 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

//i have to check if the file finish with .ber

//and i have to check if im opening a file

int	check_ber(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	if (str[i - 4] == '.' && str[i - 3] == 'b' && str[i - 2] == 'e'
		&& str[i - 1] == 'r')
	{
		printf(".ber OK\n");
		return (0);	
	}
	else
		printf(".ber KO\n");
		return (-2);
	return (0);
}
