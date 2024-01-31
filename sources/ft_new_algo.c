#include "push_swap.h"

int	ft_find_min(t_stack *stack_a)
{
	int	x;

	x = 21364748;
	while (stack_a->next != NULL)
	{
		if (stack_a->content < x)
			x = stack_a->content;
		stack_a = stack_a->next;
	}
	if (stack_a->content < x)
		x = stack_a->content;
	return (x); 
}

int	ft_find_secondmin(t_stack *stack_a, int min)
{
	int	x;

	x = 21364747;
	while (stack_a->next != NULL)
	{
		if (stack_a->content < x && stack_a->content > min)
			x = stack_a->content;
		stack_a = stack_a->next;
	}
	if (stack_a->content < x && stack_a->content > min)
		x = stack_a->content;
	return (x);
}

int	ft_set_up_push(t_stack **stack_a, int pos, int second_min, t_stack **stack_b)
{
	int	count;
	int	x;

	x = 1;
	count = ft_stack_count((*stack_a));
	//ft_printf("count = %d\n", count);
	if (pos <= (count / 2))
	{
		while (pos > 0)
		{
			if ((*stack_a)->content == second_min)
			{
				ft_push_b(stack_a, stack_b);
				pos--;
				x = 0;
			}
			else
			{
				ft_rotate_a(stack_a, 1);
				pos--;
			}
		}
	}
	else
	{
		if (pos == count)
			ft_reverse_a(stack_a, 1);
		while ((count - pos) > 0)
		{
			if ((*stack_a)->content == second_min)
			{
				ft_push_b(stack_a, stack_b);
				x = 0;
			}
			else
			{
				ft_reverse_a(stack_a, 1);
				pos++;
			}
		}
	}
	return (x);
}

void	ft_checker_b(t_stack **stack_b)
{
	if ((*stack_b)->next->content > (*stack_b)->content)
		ft_swap_b(stack_b, 1);
}
void	ft_swap_it(t_stack **stack_a, t_stack **stack_b)
{
	int	min;
	int	pos;
	int	second_min;
	int	save;

	while (ft_stack_count((*stack_a)) > 3)
	{
		min = ft_find_min((*stack_a));
		second_min = ft_find_secondmin((*stack_a), min);
		//ft_printf("min = %d\n", min);
		pos = ft_stackfind_pos((*stack_a), min);
		//ft_printf("pos = %d\n", pos);
		save = ft_set_up_push(stack_a, pos, second_min, stack_b);
		ft_push_b(stack_a, stack_b);
		if (save == 0)
			ft_checker_b(stack_b);
		//ft_printf_stack(stack_a, stack_b);
	}
	if (ft_stack_count((*stack_a)) == 2)
		ft_sort_two(stack_a);
	if (ft_stack_count((*stack_a)) == 3)
		ft_sort_three(stack_a);
	while ((*stack_b))
		ft_push_a(stack_a, stack_b);
	//ft_printf_stack(stack_a, stack_b);
	return ;
}
