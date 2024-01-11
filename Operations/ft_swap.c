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

void	ft_swap_a(t_stack **stack_a, int x)
{
	int	current;

	if (*stack_a && (*stack_a)->next)
	{
		current = (*stack_a)->next->content;
		(*stack_a)->next->content = (*stack_a)->content;
		(*stack_a)->content = current;
	}
	if (x == 1)
		ft_printf("sa\n");
}

void	ft_swap_b(t_stack **stack_b, int x)
{
	int	current;

	if (*stack_b && (*stack_b)->next)
	{
		current = (*stack_b)->next->content;
		(*stack_b)->next->content = (*stack_b)->content;
		(*stack_b)->content = current;
	}
	if (x == 1)
		ft_printf("sb\n");
}

void	ft_swap_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap_a(stack_a, 0);
	ft_swap_b(stack_b, 0);
	ft_printf("ss\n");
}
