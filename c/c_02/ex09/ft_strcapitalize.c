/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 22:06:04 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/09 12:33:06 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	bool	isfirstchar;

	isfirstchar = false;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			isfirstchar = true;
		}
		str++;
	}
	return (str);
}
