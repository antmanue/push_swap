/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 14:34:21 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/10 14:55:09 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_node *stack)
{
    t_node *temp;
    
    if(!stack)
        return(1);
    temp = stack;
    
    while(temp && temp->next)
    {
        if(temp->value > temp->next->value)
            return(0);
        temp = temp->next;
    }
    return(1);
}