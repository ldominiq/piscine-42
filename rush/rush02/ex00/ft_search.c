/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:35:31 by olmartin          #+#    #+#             */
/*   Updated: 2021/08/22 21:14:58 by olmartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_search_in_dic(char *str, char *to_find);
int		ft_calc_l(long nbr);
int		ft_atoi(char *str);
void	ft_put_error(int nb);
int		ft_written_nb(int pos, char *dic);

void	ft_search_txt(char *dic, char *str)
{	
	int		lev;
	int		pos;
	long	nbr;
	int		start;
	int		i;

	start = 0;
	nbr = ft_atoi(str);
	if (nbr < 0)
		ft_put_error(-2);
	else
	{
		lev = ft_calc_l(nbr);
		pos = ft_search_in_dic(dic, str);
		i = pos;
		while (dic[i] < 'a' || dic[i] > 'z')
		{
			start++;
			i++;
		}
		if (pos == -1)
			ft_put_error(-1);
		else
			ft_written_nb(pos + start, dic);
	}
}

int	ft_calc_l(long nbr)
{
	int	cpt;

	cpt = 0;
	while (nbr != 0)
	{
		cpt++;
		nbr = nbr / 10;
	}
	return (cpt);
}

int	ft_search_in_dic(char *str, char *to_find)
{
	int		i_s;
	int		i_t;

	i_s = 0;
	while (str[i_s] != 0)
	{
		i_t = 0;
		while (str[i_s + i_t] == to_find[i_t])
		{
			if (to_find[i_t + 1] == 0)
				return (i_s);
			i_t++;
		}
		i_s++;
	}
	return (-1);
}

int	ft_written_nb(int pos, char *dic)
{
	char	*nbr_t;

	nbr_t = dic;
	while (dic[pos] < 48 || dic[pos] > 57)
	{
		write(1, &dic[pos], 1);
		pos++;
	}
	return (0);
}
