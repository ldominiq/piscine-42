/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldominiq <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:29:26 by ldominiq          #+#    #+#             */
/*   Updated: 2021/08/22 22:29:31 by ldominiq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_search_txt(char *dic, char *str);

int	ft_read(int fd, char *str)
{
	char	*ptr;
	int		ret;

	ptr = (char *)malloc(sizeof(*ptr) * 2000);
	ret = read(fd, ptr, 2000);
	ptr[ret] = '\0';
	ft_search_txt(ptr, str);
	free(ptr);
	return (0);
}

int	ft_open(char *dic, char *str)
{
	int	fd;
	int	flag;

	fd = open(dic, O_RDONLY);
	if (fd == -1)
		return (-1);
	flag = ft_read(fd, str);
	return (flag);
}
