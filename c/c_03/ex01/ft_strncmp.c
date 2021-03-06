/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:01:54 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/13 15:17:47 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < (int)n - 1)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return ((s1[i] - s2[i]));
		}
		i++;
	}
	return ((s1[i] - s2[i]));
}
