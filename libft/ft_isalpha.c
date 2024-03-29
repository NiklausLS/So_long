/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:59:10 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/23 15:43:06 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int main ()
{
	char a;
	char b; 
	char c;
	char d;

	a = '0';
	b = 'b';
	c = 'C';
	d = '\t';
	printf("b renvoie : %d\n", ft_isalpha(b));
	printf("C renvoie : %d\n", ft_isalpha(c));
	printf("\\t renvoie : %d\n", ft_isalpha(d));
}*/
