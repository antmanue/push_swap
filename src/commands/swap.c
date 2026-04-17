/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 10:56:18 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 10:57:01 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack)
{
	t_node	*one;
	t_node	*two;

	if ((ft_stacksize(*stack)) < 2)
		return ;
	one = *stack;
	two = one->next;
	*stack = two;
	one->next = two->next;
	if (one->next != NULL)
		one->next->prev = one;
	two->next = one;
	two->prev = NULL;
	one->prev = two;
	return ;
}

void	sa(t_node **stack_a)
{
	swap(stack_a);
	ft_printf("sa\n");
	return ;
}

void	sb(t_node **stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
	return ;
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
	return ;
}
