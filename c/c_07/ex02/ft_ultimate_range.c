/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 16:48:53 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/20 14:00:30 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	lenght;

	lenght = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (range == NULL)
		return (-1);
	range[0] = malloc(sizeof(int) * lenght);
	if (range[0] == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (i);
}
