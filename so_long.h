/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:41 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/13 11:11:17 by nileempo         ###   ########.fr       */
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

int		main(int argc, char **argv);

int		check_ber(char *str);
int		check_argc(int argc);
int		check_if_file(char *str);
int		check_elem(char *file);

void	check_all(int argc, char **argv);

//print errors in stdin
void	print_error(int check);

//libft utils
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void*s, size_t n);
void	*ft_calloc(size_t ecount, size_t esize);

#endif
