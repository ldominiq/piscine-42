/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:35:56 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/09 17:11:25 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 1;
	if (ft_strlen(str) != 0)
	{
		while (*str != '\0')
		{
			if (!(*str >= 32 && *str <= 127))
			{
				count--;
				return (count);
			}
			str++;
		}
	}
	return (count);
}
