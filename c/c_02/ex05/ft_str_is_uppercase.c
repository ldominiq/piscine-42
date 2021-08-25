/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:22:57 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/08 19:35:03 by ldominiq         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 1;
	if (ft_strlen(str) != 0)
	{
		while (*str)
		{
			if (!(*str >= 'A' && *str <= 'Z'))
			{
				count--;
				return (count);
			}
			str++;
		}
	}
	return (count);
}
