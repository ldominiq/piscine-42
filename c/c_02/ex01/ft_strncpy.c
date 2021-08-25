/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 12:58:10 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/10 15:44:21 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] && i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < (int)n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
