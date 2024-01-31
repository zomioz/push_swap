/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 10:54:40 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/31 05:22:41 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_stack_sort(t_stack **stack_a)
{
	t_stack	*current;

	current = *stack_a;
	while ((*stack_a)->next != NULL)
	{
		if (((*stack_a)->content) > ((*stack_a)->next->content))
		{
			*stack_a = current;
			return (1);
		}
		*stack_a = (*stack_a)->next;
	}
	*stack_a = current;
	return (0);
}

void	ft_sort_three(t_stack **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->content > (*stack_a)->next->next->content)
	{
		ft_rotate_a(stack_a, 1);
		if (ft_check_stack_sort(stack_a) == 0)
			return ;
	}
	if ((*stack_a)->content > (*stack_a)->next->content)
	{
		ft_swap_a(stack_a, 1);
		return ;
	}
	if ((*stack_a)->content < (*stack_a)->next->content
		&& (*stack_a)->next->content > (*stack_a)->next->next->content)
	{
		if ((*stack_a)->content > (*stack_a)->next->next->content)
		{
			ft_reverse_a(stack_a, 1);
			return ;
		}
		ft_reverse_a(stack_a, 1);
		ft_swap_a(stack_a, 1);
	}
}

void	ft_sort_two(t_stack **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_swap_a(stack_a, 1);
}
