/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:22:25 by vduong            #+#    #+#             */
/*   Updated: 2018/09/17 16:28:36 by vduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void				print_coor(int c1, int c2)
{
	ft_putnbr(c1);
	ft_putchar(' ');
	ft_putnbr(c2);
	ft_putchar('\n');
}

int					main(void)
{
	t_player	player;
	t_map			map;
	t_piece		piece;
	char			*line;
	int				*coor;

	if (get_next_line(0, &line) && line && ft_strlen(line) > 10 &&
			!ft_strncmp(line, "$$$ exec p", 9) &&
			(line[10] == '1' || line[10] == '2'))
		fill_player(&player, line);
	while (1)
	{
		if (fill_map(&map) == 1)
			break ;
		if (fill_piece(&piece) == 1)
			break ;
		coor = sorted_coor(map, piece, player.symbol);
		if (coor)
			print_coor(coor[0], coor[1]);
		else
			print_coor(0, 0);
		free_all(&map, &piece);
		free(coor);
	}
	return (0);
}
