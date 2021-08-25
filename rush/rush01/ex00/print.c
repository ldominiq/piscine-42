/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:45:02 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/15 18:45:05 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterror(void)
{
	write(1, "Error\n", 6);
}

void	ft_printboard(char **board, int size)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (y < size)
	{
		while (x < size)
		{
			ft_putchar(board[y][x] + '0');
			if (x < size - 1)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		x = 0;
		y++;
	}
}
