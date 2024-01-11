/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:03:49 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/06 16:17:44 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources/push_swap.h"

void	ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *current;

	if (*stack_b)
	{
		current = *stack_b;
		*stack_b = (*stack_b)->next;
		ft_stackadd_front(stack_a, current);
	}
	ft_printf("pa\n");
}
void	ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;

	if (*stack_a)
	{
		current = *stack_a;
		*stack_a = (*stack_a)->next;
		ft_stackadd_front(stack_b, current);
	}
	ft_printf("pb\n");
}
