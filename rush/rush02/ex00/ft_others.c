/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diverses.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:15:49 by olmartin          #+#    #+#             */
/*   Updated: 2021/08/22 18:06:27 by olmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_put_error(int nb)
{
	char	t;
	char	*ptr;

	ptr = &t;
	if (nb == -1)
		ptr = "Dict Error\n";
	else if (nb == -2)
		ptr = "Error\n";
	ft_putstr(ptr);
	return (0);
}
