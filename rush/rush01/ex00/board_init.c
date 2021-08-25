/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:45:19 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/15 18:45:21 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_init(char *str, int size)
{
	char	**board;
	int		x;
	int		y;

	board = malloc(size * sizeof(char *));
	y = -1;
	while (++y < size)
	{
		board[y] = malloc((size + 4) * sizeof(char));
		x = -1;
		while (++x < size)
			board[y][x] = 0;
		x = -1;
		while (++x < 4)
		{
			board[y][size + x] = str[2 * (y + x * size)] - '0';
		}
	}
	return (board);
}
