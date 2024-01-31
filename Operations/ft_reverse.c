/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 09:04:06 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/31 05:31:58 by pirulenc         ###   ########.fr       */
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

void	ft_reverse_a(t_stack **stack_a, int x)
{
	t_stack	*last;
	t_stack	*tail;

	if ((*stack_a)->next == NULL)
		return ;
	last = ft_stacklast(*stack_a);
	tail = ft_stack_prevlast(*stack_a);
	last->next = *stack_a;
	tail->next = NULL;
	*stack_a = last;
	if (x == 1)
		ft_printf("rra\n");
}

void	ft_reverse_b(t_stack **stack_b, int x)
{
	t_stack	*last;
	t_stack	*tail;

	if ((*stack_b)->next == NULL)
		return ;
	last = ft_stacklast(*stack_b);
	tail = ft_stack_prevlast(*stack_b);
	last->next = *stack_b;
	tail->next = NULL;
	*stack_b = last;
	if (x == 1)
		ft_printf("rrb\n");
}

void	ft_reverse_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_a(stack_a, 0);
	ft_reverse_b(stack_b, 0);
	ft_printf("rrr\n");
}
