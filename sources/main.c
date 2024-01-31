/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 07:54:25 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/31 05:02:54 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_join_all(int argc, char **argv)
{
	int		x;
	char	*tempo;
	char	*dest;

	x = 1;
	dest = NULL;
	tempo = NULL;
	while (x < argc)
	{
		tempo = ft_strjoin(argv[x], " ");
		dest = ft_strjoin_free(dest, tempo);
		free(tempo);
		tempo = NULL;
		x++;
	}
	return (dest);
}

static void	ft_free_spl_tmp(char **spl, char *tempo)
{
	int	x;

	x = 0;
	while (spl[x])
	{
		free(spl[x]);
		x++;
	}
	free(spl);
	free(tempo);
}

static int	ft_start_checker(char **spl)
{
	if (ft_checker(spl) == 0)
	{
		ft_printf("Error\n");
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*tempo;
	char	**spl;

	tempo = NULL;
	if (argc < 2)
	{
		ft_printf("error\n");
		return (0);
	}
	if (argc > 2)
		tempo = ft_join_all(argc, argv);
	else
		tempo = ft_strjoin_free(tempo, argv[1]);
	spl = ft_split(tempo, ' ');
	if (ft_start_checker(spl) == 1)
		ft_cutting(spl);
	ft_free_spl_tmp(spl, tempo);
	return (1);
}
