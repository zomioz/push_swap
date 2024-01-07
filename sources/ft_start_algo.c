/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 10:54:40 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/07 11:12:59 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_stack_sort(t_stack **stack_a)
{
	t_stack *current;

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
