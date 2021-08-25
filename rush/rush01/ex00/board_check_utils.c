/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_check_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:44:45 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/15 18:44:46 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_exist_y(char **board, int y, int x, int size)
{
	int	i;

	i = y;
	while (i--)
	{
		if (board[y][x] == board[i][x])
			return (1);
	}
	i = y;
	while (++i < size)
	{
		if (board[y][x] == board[i][x])
			return (1);
	}
	return (0);
}

int	ft_exist_x(char **board, int y, int x, int size)
{
	int	i;

	i = x;
	while (i--)
	{
		if (board[y][x] == board[y][i])
			return (1);
	}
	i = x;
	while (++i < size)
	{
		if (board[y][x] == board[y][i])
			return (1);
	}
	return (0);
}

int	ft_count_visible_x(char **board, int max, int *xy, int value)
{
	int	temp;
	int	count;

	temp = 0;
	count = 0;
	while (xy[0] != max)
	{
		if (board[xy[1]][xy[0]] > temp)
		{
			temp = board[xy[1]][xy[0]];
			count++;
		}
		xy[0] += value;
	}
	return (count);
}

int	ft_count_visible_y(char **board, int max, int *xy, int value)
{
	int	temp;
	int	count;

	temp = 0;
	count = 0;
	while (xy[1] != max)
	{
		if (!board[xy[1]][xy[0]])
			return (0);
		if (board[xy[1]][xy[0]] > temp)
		{
			temp = board[xy[1]][xy[0]];
			count++;
		}
		xy[1] += value;
	}
	return (count);
}
