/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:27:55 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/16 11:28:46 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *ft_stackcopy(t_node *stack_A)
{
    t_node *stack_copy;
    t_node *temp;

    temp = stack_A;
    stack_copy = NULL;
    while(temp)
    {
        ft_add_bottom(&stack_copy,ft_new_node(temp->value));
        temp = temp->next;
    }
    return(stack_copy);
}
void ft_sort_copy(t_node *stack_copy)
{
    t_node *temp;
    int     swap;
    int     swapped;

    swapped = 1;
    while(swapped == 1)
    {
        swapped = 0;
        temp = stack_copy;
        while(temp && temp->next)
        {
            if(temp->value > temp->next->value)
            {
                swap = temp->value; 
                temp->value = temp->next->value;
                temp->next->value = swap;
                swapped = 1;
            }
            temp = temp->next;
        }
    }
}
void ft_indexation(t_node *stack_A,t_node *stack_copy)
{
    t_node *temp_A;
    t_node *temp_copy;
    int count;

    temp_A = stack_A;
    while(temp_A)
    {
        temp_copy = stack_copy;
        count = 0;
        while(temp_copy)
        {
            if(temp_A->value == temp_copy->value)
            {
                temp_A->index = count;
                break;
            }
            count++;
            temp_copy = temp_copy->next;            
        }
        temp_A = temp_A->next;
    }
}
