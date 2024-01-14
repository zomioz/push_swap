/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:04:15 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/08 13:05:20 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_go_algo(t_stack **stack_a, t_stack **stack_b)
{
	int	pos;
	int	pos_save;
	int	count;

	while ((*stack_b))
	{
		pos = ft_stackfind_pos((*stack_a), (*stack_b)->content);
		if ((*stack_b)->content < (*stack_a)->content)
			ft_push_a(stack_a, stack_b);
		else
		{
			pos_save = pos;
			count = ft_stack_count((*stack_a));
			if (pos_save <= (count / 2))
			{
				while (pos > 0)
				{
					ft_rotate_a(stack_a, 1);
					pos--;
				}
				ft_push_a(stack_a, stack_b);
				while (pos != pos_save)
				{
					ft_reverse_a(stack_a, 1);
					pos++;
				}
			}
			else
			{
				while ((count - pos) > 0)
				{
					ft_reverse_a(stack_a, 1);
					pos++;
				}
				ft_push_a(stack_a, stack_b);
				while (pos != (pos_save - 1))
				{
					ft_rotate_a(stack_a, 1);
					pos--;
				}
			}
		}
	}
}
