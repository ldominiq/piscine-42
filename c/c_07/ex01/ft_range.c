/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:06:56 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/20 11:27:38 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_lenght(int min, int max)
{
	int	lenght;

	if (min < 0 && max < 0)
	{
		if (-max < -min)
			lenght = -min - -max;
		else
			lenght = -max - -min;
	}
	else if (min < 0)
		lenght = max + -min;
	else if (max < 0)
		lenght = -max + min;
	else
		lenght = max - min;
	return (lenght);
}

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;
	int	lenght;

	if (min > max || min == max)
	{
		ptr = 0;
		return (ptr);
	}
	else
	{
		i = 0;
		lenght = ft_lenght(min, max);
		ptr = malloc((lenght - 1) * sizeof(int));
		if (ptr == NULL)
			return (NULL);
		while (min < max)
		{
			ptr[i] = min;
			min++;
			i++;
		}
		return (ptr);
	}
}
