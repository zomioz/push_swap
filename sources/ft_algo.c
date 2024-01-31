/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 05:04:00 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/31 05:32:09 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min(t_stack *stack_a)
{
	int	x;

	x = 21364748;
	while (stack_a->next != NULL)
	{
		if (stack_a->content < x)
			x = stack_a->content;
		stack_a = stack_a->next;
	}
	if (stack_a->content < x)
		x = stack_a->content;
	return (x);
}

int	ft_find_secondmin(t_stack *stack_a, int min)
{
	int	x;

	x = 21364747;
	while (stack_a->next != NULL)
	{
		if (stack_a->content < x && stack_a->content > min)
			x = stack_a->content;
		stack_a = stack_a->next;
	}
	if (stack_a->content < x && stack_a->content > min)
		x = stack_a->content;
	return (x);
}

int	ft_set_second(t_stack **a, int pos, int sec_min, t_stack **b)
{
	int	count;
	int	x;

	x = 1;
	count = ft_stack_count((*a));
	if (pos == count)
		ft_reverse_a(a, 1);
	while ((count - pos) > 0)
	{
		if ((*a)->content == sec_min)
		{
			ft_push_b(a, b);
			x = 0;
		}
		else
		{
			ft_reverse_a(a, 1);
			pos++;
		}
	}
	return (x);
}

int	ft_set(t_stack **stack_a, int pos, int sec_min, t_stack **stack_b)
{
	int	count;
	int	x;

	x = 1;
	count = ft_stack_count((*stack_a));
	if (pos <= (count / 2))
	{
		while (pos > 0)
		{
			if ((*stack_a)->content == sec_min)
			{
				ft_push_b(stack_a, stack_b);
				pos--;
				x = 0;
			}
			else
			{
				ft_rotate_a(stack_a, 1);
				pos--;
			}
		}
	}
	else
		x = ft_set_second(stack_a, pos, sec_min, stack_b);
	return (x);
}

void	ft_checker_b(t_stack **stack_b)
{
	if ((*stack_b)->next->content > (*stack_b)->content)
		ft_swap_b(stack_b, 1);
}
