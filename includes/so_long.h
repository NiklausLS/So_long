/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:41 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 18:54:35 by nileempo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# include "../gnl/get_next_line.h"
# include "../mlx/mlxos/mlx.h"
# include "../libft/includes/libft.h"

typedef struct	s_data {
	void	*mlx_ptr;
	void	*window;
	void	*img;
	void	*addr;
	int		bits_per_pixel;
	int		line_lenght;
	int		endian;
	void	*ground;
	void	*wall;
	int		p;
	int		e;
	int		c;
}			t_data;
//map structure




int		main(int argc, char **argv);

int		check_ber(char *str);
int		check_argc(int argc);
int		check_if_file(char *str);

int		check_elem(char **map);
int		find_nbr_of_elem(char **map);
int		check_nbr_of_elem(t_data check);
int		check_if_rectangle(char **map);
int		check_side_walls(char **map);
int		check_top_wall(char **map);
int		check_bottom_wall(char **map);

void	check_all(int argc, char **argv);

//print errors in stdin
void	print_error(int check);

#endif
