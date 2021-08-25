/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:30:26 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/16 16:31:42 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	(void) argc;
	(void) argv;
	i = 0;
	count = argc - 1;
	while (count > 0)
	{	
		while (argv[count][i])
		{
			ft_putchar(argv[count][i]);
			i++;
		}
		i = 0;
		count--;
		ft_putchar('\n');
	}
	return (0);
}
