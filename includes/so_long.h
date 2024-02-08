/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 06:24:41 by nileempo          #+#    #+#             */
/*   Updated: 2024/02/08 14:18:56 by nileempo         ###   ########.fr       */
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

# define WIDTH 900
# define HEIGHT 600
# define TILE_SIZE 32
# define ESC_KEY 53

typedef struct	s_data {
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img;
	void	*ground;
	void	*wall;
	void	*collectible;
	void	*player;
	void	*exit;
	int		width;
	int		height;
}			t_data;

typedef struct s_elements {
	int		rows;
	int		cols;
	int		p;
	int		e;
	int		c;
	int		p_row;
	int		p_col;
	int		e_row;
	int		e_col;
	int		c_row;
	int		c_col;
	int		c_ok;
	int		e_ok;
}			t_elem;

//map structure

int		main(int argc, char **argv);

//initialise my structures
void	init_textures(t_data *data);
void	init_structures(t_data *data, t_elem *el);

//free my structures
void    free_textures(t_data *data);
int		close_game(t_data *data);
//void	free_elements(t_elements *nbr);

//basic error checks
int		check_ber(char *str);
int		check_argc(int argc);
int		check_if_file(char *str);
int		check_elem(char **map);

//void	find_nbr_of_elem(char **map, t_elem *el);
void	check_player(char **map, t_elem *el);
void	check_exit(char **map, t_elem *el);
void	check_collectible(char **map, t_elem *el);
void	check_nbr_of_elem(t_elem *el);
int		check_side_walls(char **map);
int		check_top_wall(char **map);
int		check_bottom_wall(char **map);
int		check_size(char **map, t_data *data);
int		check_form(char **map);
char	**check_map(int argc, char **argv, t_elem *el, t_data *data);
void	flood_fill(char **map, int row, int col, t_data *data);
void	check_fill(char **map, t_elem *el);

//open file
//char	**init_map(char *file, t_elem *el);

void    make_map(t_data *data, char **map);
//event
int key_hook(int key, t_data *data);

//close the game
int	close_game(t_data *data);
//to test my project
//void	print_map(char **map, t_elem *el);
#endif
