/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:41 by nileempo          #+#    #+#             */
/*   Updated: 2023/07/10 13:07:01 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>

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
void	check_all(int argc, char **argv);
void	print_error(int check);

#endif
