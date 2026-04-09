/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 10:56:18 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/09 14:02:46 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_node** stack)
{   
    t_node *one;
    t_node *two;
    
    if((ft_stacksize(*stack)) < 2)
        return;
    one = *stack;
    two = one->next;

    *stack = two; //mudar o top

    one->next = two->next; // linkar o next do one para o que seria o next do two
    
    if(one->next != NULL) // se o novo next de one que seria o antigo(two->next) existir
        one->next->prev = one; //fazemos com que o prev depois do one(antigo two) 
        // aponto para o one

    two->next = one; // aponta para o one
    two->prev = NULL;// aponta para null por estar no topo da lista
    one->prev = two;// o prev do one aponta para two
    
    return;
}

void sa(t_node **stack_A)
{
    swap(stack_A);
    ft_printf("sa\n");
    return;
}

void sb(t_node **stack_B)
{
    swap(stack_B);
    ft_printf("sb\n");
    return;
}

void ss(t_node **stack_A, t_node **stack_B)
{
    swap(stack_A);
    swap(stack_B);
    ft_printf("ss\n");
    return;
}