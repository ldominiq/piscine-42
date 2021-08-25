/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:11:28 by olmartin          #+#    #+#             */
/*   Updated: 2021/08/22 18:01:43 by olmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
		if (str[i] == 0)
			return (i);
	}
	return (-1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	nb;

	s = 1;
	i = 0;
	nb = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nb = nb * 10;
			nb = nb + str[i] - '0';
		}
		else if (str[i] == '-')
			s = s * -1;
		else if (str[i] == '+')
			;
		else
			return (-1);
		i++;
	}
	return (s * nb);
}
