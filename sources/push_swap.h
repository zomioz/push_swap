/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pirulenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 07:57:19 by pirulenc          #+#    #+#             */
/*   Updated: 2024/01/31 05:23:15 by pirulenc         ###   ########.fr       */
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
void	ft_swap_a(t_stack **stack_a, int x);
void	ft_swap_b(t_stack **stack_b, int x);
void	ft_swap_both(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_a, t_stack **stack_b);
void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate_a(t_stack **stack_a, int x);
void	ft_rotate_b(t_stack **stack_b, int x);
void	ft_rotate_both(t_stack **stack_a, t_stack **stack_b);
void	ft_reverse_a(t_stack **stack_a, int x);
void	ft_reverse_b(t_stack **stack_b, int x);
void	ft_reverse_both(t_stack **stack_a, t_stack **stack_b);
int		ft_check_stack_sort(t_stack **stack_a);
int		ft_stack_count(t_stack *lst);
int		ft_stackfind_pos(t_stack *lst, int content);
void	ft_sort_three(t_stack **stack_a);
void	ft_sort_two(t_stack **stack_a);
void	ft_swap_it(t_stack **stack_a, t_stack **stack_b);
int		ft_find_min(t_stack *stack_a);
int		ft_find_secondmin(t_stack *stack_a, int min);
int		ft_set_second(t_stack **a, int pos, int sec_min, t_stack **b);
int		ft_set(t_stack **stack_a, int pos, int sec_min, t_stack **stack_b);
void	ft_checker_b(t_stack **stack_b);

void	ft_printf_stack(t_stack **stack_a, t_stack **stack_b);

#endif
