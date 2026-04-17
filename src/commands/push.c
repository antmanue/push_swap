/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 12:50:13 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 10:44:17 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **stack_in, t_node **stack_out)
{
	t_node	*temp;

	if (!(*stack_out))
		return ;
	temp = *stack_out;
	temp->prev = NULL;
	*stack_out = (*stack_out)->next;
	if ((*stack_out))
		(*stack_out)->prev = NULL;
	temp->next = *stack_in;
	if ((*stack_in) != NULL)
		(*stack_in)->prev = temp;
	*stack_in = temp;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pa\n");
	return ;
}

void	pb(t_node **stack_b, t_node **stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pb\n");
	return ;
}
