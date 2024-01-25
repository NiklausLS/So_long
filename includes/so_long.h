/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:41 by nileempo          #+#    #+#             */
/*   Updated: 2024/01/25 22:47:30 by nileempo         ###   ########.fr       */
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
	void	*ground;
	void	*wall;
}			t_data;

typedef struct s_elements {
	int		p;
	int		e;
	int		c;

	int		p_row;
	int		p_col;
	int		e_row;
	int		e_col;
	int		c_row;
	int		c_col;
}			t_elem;

//map structure

int		main(int argc, char **argv);

//initialise my structures
void	init_structures(t_data *data, t_elem *el);

//free my structures
void	free_data(t_data *data);
//void	free_elements(t_elements *nbr);

int		check_ber(char *str);
int		check_argc(int argc);
int		check_if_file(char *str);
int		check_elem(char **map);
int		find_nbr_of_elem(char **map, t_elem *el);
int		check_nbr_of_elem(t_elem *el);
int		check_if_rectangle(char **map);
int		check_side_walls(char **map);
int		check_top_wall(char **map);
int		check_bottom_wall(char **map);

void	check_all(int argc, char **argv, t_elem el);

//print errors in stdin
void	print_error(int check);

#endif
