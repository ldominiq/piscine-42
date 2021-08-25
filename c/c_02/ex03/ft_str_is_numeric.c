/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 18:59:05 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/09 17:17:47 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 1;
	if (ft_strlen(str) != 0)
	{
		while (*str != '\0')
		{
			if (!(*str >= '0' && *str <= '9'))
			{
				count--;
				return (count);
			}
			str++;
		}
	}
	return (count);
}
