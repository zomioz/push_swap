/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 09:02:20 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/31 05:03:44 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_count(t_stack *lst)
{
	int	x;

	x = 1;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		x++;
	}
	return (x);
}

int	ft_stackfind_pos(t_stack *lst, int content)
{
	int	x;

	x = 0;
	if (lst == NULL)
		return (0);
	while (lst->next != NULL && lst->content != content)
	{
		lst = lst->next;
		x++;
	}
	if (lst->next == NULL && lst->content == content)
		return (x + 1);
	return (x);
}
