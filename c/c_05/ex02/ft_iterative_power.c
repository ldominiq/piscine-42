/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:30:08 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/17 01:17:43 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	value;

	i = 0;
	value = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power - 1)
	{
		value *= nb;
		i++;
	}
	return (value);
}
