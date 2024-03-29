/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cutting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 09:30:11 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/31 05:26:08 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printf_stack(t_stack **stack_a, t_stack **stack_b)
{
	int		x;
	t_stack	*current;

	current = *stack_a;
	x = 0;
	while ((*stack_a))
	{
		ft_printf("stack_a %d -> %d\n", x, (*stack_a)->content);
		(*stack_a) = (*stack_a)->next;
		x++;
	}
	x = 0;
	*stack_a = current;
	if (stack_b)
	{
		ft_printf("\n");
		current = *stack_b;
		while ((*stack_b))
		{
			ft_printf("stack_b %d -> %d\n", x, (*stack_b)->content);
			(*stack_b) = (*stack_b)->next;
			x++;
		}
		*stack_b = current;
	}
}

void	ft_init_stack_b(t_stack **stack_a)
{
	t_stack	**stack_b;

	stack_b = malloc(sizeof(t_stack *));
	if (!stack_b)
		return ;
	*stack_b = NULL;
	ft_swap_it(stack_a, stack_b);
	ft_stackclear(stack_b);
	free(stack_b);
}

void	ft_cutting(char **spl)
{
	t_stack	**stack_a;
	int		x;

	stack_a = malloc(sizeof(t_stack *));
	if (!stack_a)
		return ;
	*stack_a = NULL;
	x = 0;
	while (spl[x])
	{
		ft_stackadd_back(stack_a, ft_stacknew(ft_atoi(spl[x])));
		x++;
	}
	if (ft_check_stack_sort(stack_a) == 1)
		ft_init_stack_b(stack_a);
	ft_stackclear(stack_a);
	free(stack_a);
}
