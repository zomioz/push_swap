/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:04:06 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/07 09:39:15 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../sources/push_swap.h"

static t_stack	*ft_stack_prevlast(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next->next != NULL)
	{
		stack = stack->next;
	}
	return (stack);
}

void	ft_reverse_a(t_stack **stack_a)
{
	if ((*stack_a)->next == NULL)
		return ;
	t_stack	*last;
	t_stack *tail;

	last = ft_stacklast(*stack_a);
	tail = ft_stack_prevlast(*stack_a);
	last->next = *stack_a;
	tail->next = NULL;
	*stack_a = last;
}

void	ft_reverse_b(t_stack **stack_b)
{
	if ((*stack_b)->next == NULL)
		return ;
	t_stack	*last;
	t_stack	*tail;

	last = ft_stacklast(*stack_b);
	tail = ft_stack_prevlast(*stack_b);
	last->next = *stack_b;
	tail->next = NULL;
	*stack_b = last;
}

void	ft_reverse_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_a(stack_a);
	ft_reverse_b(stack_b);
}
