/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker_bis.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 08:26:53 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/06 09:26:17 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checker_dupli(int *tab, int nbr)
{
	int	x;
	int	y;

	x = 0;
	y = x + 1;
	while (x < (nbr - 1))
	{
		while (y < nbr && tab[x] != tab[y])
			y++;
		if (y < nbr && tab[x] == tab[y])
			return (0);
		x++;
		y = x + 1;
	}
	return (1);
}
