/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:59:15 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/06 12:34:59 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacklast(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_stackadd_front(t_stack **lst, t_stack *new)
{
	if (!(lst) || !(new))
		return ;
	new->next = *lst;
	*lst = new;
}

void	ft_stackadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*current;

	if (!new)
		return ;
	if (*lst == 0)
		return (ft_stackadd_front(lst, new));
	current = ft_stacklast(*lst);
	current->next = new;
}

t_stack	*ft_stacknew(int content)
{
	t_stack			*list;

	list = malloc(sizeof(t_stack));
	if (!list)
		return (0);
	list->content = content;
	list->next = 0;
	return (list);
}
