/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:33:03 by olmartin          #+#    #+#             */
/*   Updated: 2021/08/22 19:05:52 by olmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_put_error(int nb);
int		ft_open(char *dic, char *str);
int		ft_read(int fd, char *arg);

int	main(int argc, char **argv)
{
	int		fd;
	int		flag;

	flag = 0;
	fd = 1;
	if (argc == 2)
		flag = ft_open("numbers.dict", argv[1]);
	else if (argc == 3)
		flag = ft_open(argv[1], argv[2]);
	else
		flag = -2;
	if (flag < 0)
		ft_put_error(flag);
	return (0);
}
