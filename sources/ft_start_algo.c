/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 05:18:03 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/31 05:34:49 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_it(t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	int	pos;
	int	second_min;
	int	save;

	while (ft_stack_count((*stack_a)) > 3)
	{
		min = ft_find_min((*stack_a));
		second_min = ft_find_secondmin((*stack_a), min);
		pos = ft_stackfind_pos((*stack_a), min);
		save = ft_set(stack_a, pos, second_min, stack_b);
		ft_push_b(stack_a, stack_b);
		if (save == 0)
			ft_checker_b(stack_b);
	}
	if (ft_stack_count((*stack_a)) == 2)
		ft_sort_two(stack_a);
	if (ft_stack_count((*stack_a)) == 3)
		ft_sort_three(stack_a);
	while ((*stack_b))
		ft_push_a(stack_a, stack_b);
	return ;
}
