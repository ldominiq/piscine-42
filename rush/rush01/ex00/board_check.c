/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:44:34 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/15 18:44:37 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_exist_x(char **board, int y, int x, int size);
int	ft_exist_y(char **board, int y, int x, int size);
int	ft_count_visible_x(char **board, int max, int *xy, int value);
int	ft_count_visible_y(char **board, int max, int *xy, int value);

int	ft_exist(char **board, int x, int y, int size)
{
	if (!board[y][x])
		return (0);
	if (ft_exist_y(board, y, x, size))
		return (1);
	if (ft_exist_x(board, y, x, size))
		return (1);
	return (0);
}

int	ft_args_col(char **board, int x, int value, int size)
{
	int	y;
	int	max;
	int	xy[2];

	if (value > 0)
	{
		y = 0;
		max = size;
	}
	else
	{
		y = size - 1;
		max = -1;
	}
	xy[0] = x;
	xy[1] = y;
	return (ft_count_visible_y(board, max, xy, value));
}

int	ft_args_row(char **board, int y, int value, int size)
{
	int	x;
	int	max;
	int	xy[2];

	if (value > 0)
	{
		x = 0;
		max = size;
	}
	else
	{
		x = size - 1;
		max = -1;
	}
	xy[0] = x;
	xy[1] = y;
	return (ft_count_visible_x(board, max, xy, value));
}
