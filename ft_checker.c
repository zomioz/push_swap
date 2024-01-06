/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:56:08 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/06 09:00:11 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_trim_more(char **str, int x) //enleve les "+" au debut de **str
{
	char	*temp;

	temp = ft_strtrim(str[x], "+");
	free(str[x]);
	str[x] = NULL;
	str[x] = ft_strjoin_free(str[x], temp);
	free(temp);
}

static int	ft_checker_overflow(char **tempo, char **str) //verifie que l'on ai le meme chiffre apres un atoi + itoa, evite les overflow de int
{
	int		x;
	size_t	y;

	x = 0;
	y = 0;
	while (tempo[x] && str[x])
	{
		while (tempo[x][y] == str[x][y] && tempo[x][y] != '\0'
				&& str[x][y] != '\0')
			y++;
		if (y != ft_strlen(str[x]))
			return (0);
		y = 0;
		x++;
	}
	return (1);
}

static void	ft_free_all(int *tab, char **tempo)
{
	int	x;

	x = 0;
	while (tempo[x])
	{
		free(tempo[x]);
		x++;
	}
	free(tempo);
	free(tab);
}

static int	ft_checker_int(char **str) //decoupe le **str en tab de int & en copie de **str
{
	int		nbr;
	int		*tab;
	int		x;
	char	**tempo;

	x = 0;
	nbr = 0;
	while (str[nbr])
		nbr++;
	tab = ft_calloc(sizeof(int), nbr);
	tempo = ft_calloc(sizeof(char *), (nbr + 1));
	while (x < nbr)
	{
		tab[x] = ft_atoi(str[x]);
		if (str[x][0] == 43)
			ft_trim_more(str, x);
		tempo[x] = ft_itoa(tab[x]);
		x++;
	}
	x = ft_checker_overflow(tempo, str);
	x = x + ft_checker_dupli(tab, nbr);
	ft_free_all(tab, tempo);
	if (x != 2)
		return (0);
	return (1);
}

int	ft_checker(char **str) //verifie que ce soit des digits avec 1 seul + ou -
{
	int		x;
	size_t	y;
	int		check;

	y = 0;
	x = 0;
	check = 0;
	while (str[x] != NULL)
	{
		while (((str[x][y] >= '0' && str[x][y] <= '9') || str[x][y] == '+'
				|| str[x][y] == '-') && str[x][y] != '\0')
		{
			if (str[x][y] == '+' || str[x][y] == '-')
				check++;
			y++;
		}
		if (check > 1 || y < ft_strlen(str[x]))
			return (0);
		y = 0;
		check = 0;
		x++;
	}
	if (ft_checker_int(str) == 0)
		return (0);
	return (1);
}
