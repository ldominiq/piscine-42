/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:14:21 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/08 19:22:05 by ldominiq         ###   ########.fr       */
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

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 1;
	if (ft_strlen(str) != 0)
	{
		while (*str)
		{
			if (!(*str >= 'a' && *str <= 'z'))
			{
				count--;
				return (count);
			}
			str++;
		}
	}
	return (count);
}
