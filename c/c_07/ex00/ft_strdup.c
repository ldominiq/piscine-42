/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 01:22:02 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/20 11:30:47 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		count;
	int		i;

	i = -1;
	count = 0;
	while (src[++i])
		count++;
	dest = malloc(count * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	return (ft_strcpy(dest, src));
}
