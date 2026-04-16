/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 14:34:21 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/16 14:04:18 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool is_sorted(t_node *stack)
{
    t_node *temp;
    
    if(!stack)
        return true;
    temp = stack;
    
    while(temp && temp->next)
    {
        if(temp->value > temp->next->value)
            return false;
        temp = temp->next;
    }
    return true;
}
void sort_three(t_node **stack_A)
{
    int top;
    int mid;
    int bot;

    top = (*stack_A)->index;
    mid = (*stack_A)->next->index;
    bot = (*stack_A)->next->next->index;
    if (top > mid && top > bot)
        {
            ra(stack_A);
            if(mid > bot)
                sa(stack_A);
        }
    else if(mid > top && mid > bot)
        {
            rra(stack_A);
            if(bot > top)
                sa(stack_A);
        }
    else
        sa(stack_A);
    
}
void sort_four(t_node **stack_A, t_node **stack_B)
{
    while((*stack_A)->index != 0)
            ra(stack_A);
        pb(stack_B, stack_A);
        sort_three(stack_A);
        pa(stack_A, stack_B);
}
void sort_five(t_node **stack_A, t_node **stack_B)
{
    
}

