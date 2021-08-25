/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 17:35:14 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/08 19:05:42 by ldominiq         ###   ########.fr       */
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

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 1;
	if (ft_strlen(str) != 0)
	{
		while (*str != '\0')
		{
			if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
			{
				count--;
				return (count);
			}
			str++;
		}
	}
	return (count);
}
