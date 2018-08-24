/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:10:36 by vduong            #+#    #+#             */
/*   Updated: 2018/08/22 15:38:01 by vduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

#include	"../libft/libft.h"
#include	"get_next_line.h"
#include <stdio.h>

typedef	struct	 s_piece
{
	int		height;
	int		width;
	char	**content;
	int		enemy_distance;
}				t_piece;

typedef	struct	s_map
{
	int		height;
	int		width;
	char	**content;
}				t_map;

typedef	struct	s_player
{
	int		number;
	char	*name;
	char	symbol;
}				t_player;


int				fill_map(t_map *map);
int				fill_piece(t_piece *piece);
int				fill_player(t_player *player, char *firstline);
void			free_map(t_map *map);
void			free_piece(t_piece *piece);
void			free_player(t_player *player);
char			**init_map(int height, int width);
int				write_coor(t_map map, t_piece piece, t_player player);
int				**get_valid_coor(t_map map, t_piece piece, char symbol);
int				compare_coor(t_map m, t_piece p, int **e_c, int *c1, int *c2);
int				**init_coor(int size);
int				count_symbol(t_map map, char symbol);
int				**get_player_coor(t_map map, char symbol);
int				**sorted_coor(t_map map, t_piece piece, char symbol);

#endif
