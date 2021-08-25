/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 17:11:17 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/22 13:19:23 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_join(char **strs, char *str, char *sep, int size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -1;
	j = -1;
	k = -1;
	l = -1;
	while (++i < size)
	{
		while (strs[i][++j])
		{
			str[++l] = strs[i][j];
		}
		if (i < size - 1)
		{
			while (sep[++k])
				str[++l] = sep[k];
			k = -1;
		}
		j = -1;
	}
	str[++l] = 0;
}

int	ft_get_size(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	lenght;

	lenght = 0;
	i = -1;
	j = -1;
	k = -1;
	while (++i < size)
	{
		while (strs[i][++j])
			lenght++;
		j = 0;
	}
	i = -1;
	while (++i < size - 1)
	{
		while (sep[++k])
			lenght++;
	}
	return (lenght);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (strs == NULL || size <= 0 || sep == NULL)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * ft_get_size(strs, size, sep) + 1);
	if (str == NULL)
		return (NULL);
	ft_join(strs, str, sep, size);
	return (str);
}
