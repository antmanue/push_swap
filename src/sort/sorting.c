/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 14:34:21 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/14 15:26:55 by antmanue         ###   ########.fr       */
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
void sort_three(stack_A)
{
    
}
void sort_five(stack_A)
{
    
}

