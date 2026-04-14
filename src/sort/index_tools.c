/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:27:55 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/14 16:14:56 by antmanue         ###   ########.fr       */
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