/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start_algo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 10:54:40 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/11 07:08:02 by pirulenc         ###   ########.fr       */
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

static void	ft_sort_three(t_stack **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content
		&& (*stack_a)->content > (*stack_a)->next->next->content) // si 3 en 1er
	{
		ft_rotate_a(stack_a, 1);
		if (ft_check_stack_sort(stack_a) == 0)
			return ;
	}
	if ((*stack_a)->content > (*stack_a)->next->content) // donc 3 forcement a la fin, donc check de 2
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

static void	ft_sort_two(t_stack **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_swap_a(stack_a, 1);
}

void	ft_cut_three(t_stack **stack_a, t_stack **stack_b)
{
	int	nbr;

	nbr = ft_stack_count((*stack_a));
	ft_printf("nbr = %d\n", nbr);
	if (nbr > 3)
	{
		while (nbr > 3)
		{
			ft_push_b(stack_a, stack_b);
			nbr--;
		}
	}
	if (nbr == 3)
	{
		ft_sort_three(stack_a);
		if (ft_stack_count((*stack_b)) == 0)
		{
			ft_printf_stack(stack_a, stack_b);
			return ;
		}
		//ft_go_algo(stack_a, stack_b);
	}
	if (nbr == 2)
		ft_sort_two(stack_a);
	ft_printf_stack(stack_a, stack_b);
}
