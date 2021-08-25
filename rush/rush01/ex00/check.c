/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:47:15 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/15 18:47:18 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_puterror(void);

int	ft_argscheck(char *args)
{
	int	i;
	int	j;

	j = 0;
	i = -1;
	while (args[++i])
	{
		if (args[i] != 32)
			j++;
	}
	if (j > 16 || j < 16 || i != 31)
	{
		ft_puterror();
		return (1);
	}
	i = -1;
	while (args[++i])
	{
		if (!((args[i] >= '1' && args[i] <= '4') || args[i] == ' '))
		{
			ft_puterror();
			return (1);
		}
	}
	return (0);
}

int	ft_get_size(char *str)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			size++;
		else
			return (0);
		if (str[++i] == ' ' && !str[++i])
			return (0);
	}
	if (size != 16)
		return (0);
	return (4);
}
