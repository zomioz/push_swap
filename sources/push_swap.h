/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 07:57:19 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/06 15:00:46 by pirulenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

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
void	ft_swap_a(t_stack **stack_a);
void	ft_swap_b(t_stack **stack_b);
void	ft_swap_both(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_a, t_stack **stack_b);
void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_a(t_stack **stack_a);
void	ft_rotate_b(t_stack **stack_b);
void	ft_rotate_both(t_stack **stack_a, t_stack **stack_b);
void	ft_reverse_a(t_stack **stack_a);
void	ft_reverse_b(t_stack **stack_b);
void	ft_reverse_both(t_stack **stack_a, t_stack **stack_b);
int	ft_check_stack_sort(t_stack **stack_a);

#endif
