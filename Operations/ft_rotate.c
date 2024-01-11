/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:30:17 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/07 09:02:38 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "../sources/push_swap.h"

void	ft_rotate_a(t_stack **stack_a, int x)
{
	if ((*stack_a)->next == NULL)
		return ;
	t_stack *first;
	t_stack	*head;
	t_stack	*last;

	first = (*stack_a);
	head = (*stack_a)->next;
	last = ft_stacklast((*stack_a));
	last->next = first;
	first->next = NULL;
	(*stack_a) = head;
	if (x == 1)
		ft_printf("ra\n");
}

void	ft_rotate_b(t_stack **stack_b, int x)
{
	if ((*stack_b)->next == NULL)
		return ;
	t_stack *first;
	t_stack	*head;
	t_stack	*last;

	first = (*stack_b);
	head = (*stack_b)->next;
	last = ft_stacklast((*stack_b));
	last->next = first;
	first->next = NULL;
	(*stack_b) = head;
	if (x == 1)
		ft_printf("rb\n");
}

void	ft_rotate_both(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate_a(stack_a, 0);
	ft_rotate_b(stack_b, 0);
	ft_printf("rr\n");
}
