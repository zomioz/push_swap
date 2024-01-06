/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 13:56:12 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/06 14:59:02 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources/push_swap.h"

void	ft_swap_a(t_stack **stack_a)
{
	int	current;

	if (*stack_a && (*stack_a)->next)
	{
		current = (*stack_a)->next->content;
		(*stack_a)->next->content = (*stack_a)->content; //mets le content du 1er dans le 2eme;
		(*stack_a)->content = current;
	}
}

void	ft_swap_b(t_stack **stack_b)
{
	int	current;

	if (*stack_b && (*stack_b)->next)
	{
		current = (*stack_b)->next->content;
		(*stack_b)->next->content = (*stack_b)->content;
		(*stack_b)->content = current;
	}
}

void	ft_swap_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
}
