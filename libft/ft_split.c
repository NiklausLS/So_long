/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:57:01 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/23 15:57:20 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

static int	ft_str_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		j;
	int		t;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	t = -1;
	tab = malloc(sizeof(char *) * (ft_str_count(s, c) + 1));
	if (!tab)
		return (NULL);
	while (++t < ft_str_count(s, c))
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		tab[t] = ft_substr(s, j, i - j);
	}
	tab[t] = NULL;
	return (tab);
}
