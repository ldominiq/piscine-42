/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:09:43 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/14 18:57:12 by vvermot-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_check(char **board, int x, int y, int size);
int		ft_args_col(char **board, int x, int value, int size);
int		ft_args_row(char **board, int y, int value, int size);
int		ft_exist(char **board, int x, int y, int size);
void	ft_printboard(int **board);
void	ft_puterror(void);

int	ft_check(char **board, int x, int y, int size)
{
	if (ft_exist(board, x, y, size)
		|| ft_args_col(board, x, 1, size) > board[x][size] || (y == size - 1
		&& ft_args_col(board, x, -1, size) != board[x][size + 1])
		|| ft_args_row(board, y, 1, size) > board[y][size + 2] || (x == size - 1
		&& ft_args_row(board, y, -1, size) != board[y][size + 3]))
		return (0);
	return (1);
}

int	ft_backtracking(char **board, int num, int size)
{
	int	i;
	int	x;
	int	y;

	if (num == size * size)
		return (1);
	i = 0;
	x = num % size;
	y = num / size;
	while (++i <= size)
	{
		board[y][x] = i;
		if (ft_check(board, x, y, size))
		{
			if (ft_backtracking(board, num + 1, size))
			{
				return (1);
			}
			board[y][x] = 0;
		}
	}
	board[y][x] = 0;
	return (0);
}

int	ft_run(char **board, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		if (board[i][size] + board[i][size + 1] > size + 1
			|| board[i][size + 2] + board[i][size + 3] > size + 1)
			return (0);
	return (ft_backtracking (board, 0, size));
}
