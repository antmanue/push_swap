/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 14:34:21 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 12:32:43 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_sorted(t_node *stack)
{
	t_node	*temp;

	if (!stack)
		return (true);
	temp = stack;
	while (temp && temp->next)
	{
		if (temp->value > temp->next->value)
			return (false);
		temp = temp->next;
	}
	return (true);
}

void	sort_three(t_node **stack_a)
{
	int	top;
	int	mid;
	int	bot;

	top = (*stack_a)->index;
	mid = (*stack_a)->next->index;
	bot = (*stack_a)->next->next->index;
	if (top > mid && top > bot)
	{
		ra(stack_a);
		if (mid > bot)
			sa(stack_a);
	}
	else if (mid > top && mid > bot)
	{
		rra(stack_a);
		if (bot > top)
			sa(stack_a);
	}
	else if (top > mid && top < bot)
		sa(stack_a);
}

void	sort_four(t_node **stack_a, t_node **stack_b)
{
	while ((*stack_a)->index != 0)
		ra(stack_a);
	pb(stack_b, stack_a);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_node **stack_a, t_node **stack_b)
{
	int		push_count;
	t_node	*last_node;

	last_node = ft_stacklast(*stack_a);
	push_count = 0;
	while (push_count < 2)
	{
		if ((*stack_a)->index < 2)
		{
			pb(stack_b, stack_a);
			push_count++;
		}
		else if (last_node->index < 2 || last_node->prev->index < 2)
			rra(stack_a);
		else
			ra(stack_a);
	}
	sort_three(stack_a);
	if ((ft_stacksize(*stack_b) == 2) && (*stack_b)->index == 0)
		sb(stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
