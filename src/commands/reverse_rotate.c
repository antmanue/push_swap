/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:39:36 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/10 14:23:10 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate(t_node **stack)
{
    t_node  *last_node;
    t_node  *prelast_node;
    t_node  *first;
    
    if(!(*stack) || !(*stack)->next)
        return;

    last_node = ft_stacklast(*stack);
    prelast_node = last_node->prev;
    first = (*stack);

    last_node->next = first;
    last_node->prev = NULL;
    first->prev = last_node;
    prelast_node->next = NULL;

    *stack = last_node;
}

void rra(t_node **stack_A)
{
    reverse_rotate(stack_A);
    ft_printf("rra\n");
}
void rrb(t_node **stack_B)
{
    reverse_rotate(stack_B);
    ft_printf("rrb\n");
}
void rrr(t_node **stack_A, t_node **stack_B)
{
    reverse_rotate(stack_A);
    reverse_rotate(stack_B);   
    ft_printf("rrr\n");
}
