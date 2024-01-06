/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cutting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 09:30:11 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/06 12:50:29 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cutting(char **spl)
{
	t_stack	**stack_a;
	int		x;
	t_stack	*current;

	stack_a = malloc(sizeof(t_stack*));
	*stack_a = NULL;
	x = 0;
	while (spl[x])
	{
		ft_stackadd_back(stack_a, ft_stacknew(ft_atoi(spl[x])));
		x++;
	}
	x = 0; // utiliser pour l'impression a delete ensuite
	current = *stack_a;
	while ((*stack_a))
	{
		ft_printf("stack%d = %d\n", x, (*stack_a)->content);
		(*stack_a) = (*stack_a)->next;
		x++;
	}
	*stack_a = current; //delete avec cette ligne inclus
	ft_stackclear(stack_a);
	free(stack_a);
}
