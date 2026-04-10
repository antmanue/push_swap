/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:39:29 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/10 14:08:08 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_node **stack)
{
    t_node *last_node;
    t_node *first;
    t_node *second;
    
    if(!(*stack) || !((*stack)->next))
        return;

    first = *stack;
    second = (*stack)->next;
    last_node = ft_stacklast(*stack);
    
    *stack = (*stack)->next; 
    second->prev = NULL;
    last_node->next = first;
    first->prev = last_node;
    first->next = NULL;
}
void ra(t_node **stack_A)
{
    rotate(stack_A);
    ft_printf("ra\n");
}
void rb(t_node **stack_B)
{
    rotate(stack_B);
    ft_printf("rb\n");
}
void rr(t_node **stack_A, t_node **stack_B)
{
    rotate(stack_A);
    rotate(stack_B);
    ft_printf("rr\n");
}