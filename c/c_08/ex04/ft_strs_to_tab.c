/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:14:34 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/19 20:19:21 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;
	t_stock_str	*tmp;

	i = 0;
	tab = malloc((ac * sizeof(t_stock_str)) + 1);
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tmp = (t_stock_str *)malloc(sizeof(t_stock_str));
		if (tmp == NULL)
			return (NULL);
		tab[i] = *tmp;
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = malloc(ft_strlen(av[i]) * sizeof(char));
		if (tab[i].copy == NULL)
			return (NULL);
		tab[i].copy = ft_strcpy(tab[i].copy, av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
