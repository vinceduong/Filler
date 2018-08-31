/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_symbol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 12:18:25 by vduong            #+#    #+#             */
/*   Updated: 2018/08/22 15:52:00 by vduong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#define	MCONTENT	map.content[i][j]

int	count_symbol(t_map map, char symbol)
{
	int count;
	int i;
	int j;

	count = 0;
	i = 0;
	while (i < map.height)
	{
		j = 0;
		while (j < map.width)
		{
			if (MCONTENT == symbol || MCONTENT == (symbol == 'O' ? 'o' : 'x'))
			{
				//printf("i = %d, j = %d\n", i, j);
				count++;
			}
			j++;
		}
		i++;
	}
	return (count);
}