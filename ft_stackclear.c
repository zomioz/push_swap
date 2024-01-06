/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackclear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:53:45 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/06 12:37:48 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackdelone(t_stack *lst)
{
	if (!lst)
		return ;
	lst->content = 0;
	free(lst);
}

void	ft_stackclear(t_stack **lst)
{
	t_stack	*content;

	if (!lst || !*lst)
		return ;
	while (*lst != 0)
	{
		content = (*lst)->next;
		ft_stackdelone(*lst);
		*lst = content;
	}
}
