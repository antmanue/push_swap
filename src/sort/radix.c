/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:59:22 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/16 16:04:15 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
int get_max_index(t_node *stack)
{
    t_node *temp;
    int max_index;
    
    temp = stack;
    max_index = 0;
    while(temp)
    {
        if(max_index < temp->index)
            max_index = temp->index;
        temp = temp->next;
    }
    return(max_index);
}

int get_max_bits(t_node *stack)
{
    int max_index;
    int max_bits; 
    
    max_index = get_max_index(stack);
    max_bits = 0;
    while(max_index > 0)
    {
        max_index = max_index >> 1;
        max_bits++;
    }
    return(max_bits);
}

void radix_sort(t_node **stack_A, t_node **stack_B)
{
    int i;
    int j;
    int size;
    int max_bits;
    
    i = 0;
    size = ft_stacksize(*stack_A);
    max_bits = get_max_bits(*stack_A);
    while(i < max_bits)
    {
        j = 0;
        while(j < size)
        {
            if(1 == (((*stack_A)->index >> i) & 1))
                ra(stack_A);
            else
                pb(stack_B, stack_A);
            j++;
        }
        while(*stack_B)
            pa(stack_A,stack_B);
        i++;
    }
}
