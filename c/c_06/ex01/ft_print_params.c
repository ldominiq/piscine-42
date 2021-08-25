/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:28:27 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/16 16:29:55 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	(void) argc;
	(void) argv;
	i = 0;
	count = 1;
	while (count < argc)
	{
		while (argv[count][i])
		{
			ft_putchar(argv[count][i]);
			i++;
		}
		count++;
		i = 0;
		ft_putchar('\n');
	}
}
