/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:55:29 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/12 18:00:45 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	value;
	int	i;

	i = 1;
	value = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		value *= ++i;
	}
	return (value);
}
