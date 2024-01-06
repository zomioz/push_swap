/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 07:57:19 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/06 10:31:39 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}				t_stack;

int		ft_checker(char **str);
int		ft_checker_dupli(int *tab, int nbr);
void	ft_cutting(char **spl);
t_stack	*ft_stacklast(t_stack *lst);
void	ft_stackadd_front(t_stack **lst, t_stack *new);
void	ft_stackadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_stacknew(int content);
void	ft_stackclear(t_stack **lst);
void	ft_stackdelone(t_stack *lst);

#endif
