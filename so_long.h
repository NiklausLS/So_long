/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:41 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/14 10:15:25 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>

# include "gnl/get_next_line.h"

typedef struct	s_data {
	void	*img;
	void	*addr;
	int		bits_per_pixel;
	int		line_lenght;
	int		endian;
}			t_data;

typedef	struct	s_img {
	void	*ground;
	void	*wall;
}		t_img;

typedef struct s_map {
	int		p;
	int		e;
	int		c;
}		t_map;

int		main(int argc, char **argv);

int		check_ber(char *str);
int		check_argc(int argc);
int		check_if_file(char *str);
int		check_elem(char **map);
void	find_nbr_of_elem(char **map);
void	check_if_rectangle(char **map);
void	check_side_walls(char **map);

void	check_all(int argc, char **argv);

//print errors in stdin
void	print_error(int check);

//libft utils
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void*s, size_t n);
void	*ft_calloc(size_t ecount, size_t esize);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	**ft_split(char *s, char c);

#endif
