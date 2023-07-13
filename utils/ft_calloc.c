/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:03:10 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/13 10:59:20 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	*ft_calloc(size_t ecount, size_t esize)
{
	void	*ptr;

	if (ecount && esize > SIZE_MAX / ecount)
		return (NULL);
	ptr = malloc(ecount * esize);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, ecount * esize);
	return (ptr);
}
