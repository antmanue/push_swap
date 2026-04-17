/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:39:36 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 10:51:37 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_node **stack)
{
	t_node	*last_node;
	t_node	*prelast_node;
	t_node	*first;

	if (!(*stack) || !(*stack)->next)
		return ;
	last_node = ft_stacklast(*stack);
	prelast_node = last_node->prev;
	first = (*stack);
	last_node->next = first;
	last_node->prev = NULL;
	first->prev = last_node;
	prelast_node->next = NULL;
	*stack = last_node;
}

void	rra(t_node **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_node **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
