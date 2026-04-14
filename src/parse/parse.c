/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:03:41 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/14 11:35:29 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void errorexit(char *msg, int n)
{
    write(2, msg, n);
    exit(1);
}

void ft_matriz_clear(char **matriz)
{
    int i;
    i = 0;

    if(!matriz || !(matriz[i]))
        return;
    while(matriz[i])
    {
        free(matriz[i]);
        i++;
    }
    free(matriz);
}

void errorclear(t_node **stack_A, char **matriz, int flag)
{
    if(flag == 1)
    {
        ft_matriz_clear(matriz);
    }        
    ft_stackclear(stack_A);
    errorexit("Error\n", 6); 
}

bool    is_duplicate(t_node *stack_A, int num)
{
    while(stack_A)
    {
        if(stack_A->value == num)
                return true;
        stack_A = stack_A->next;
    }
    return false;
}   
bool is_valid_syntax(char *matriz)
{
     int i;

    i = 0;
    if((matriz[0] == '-' || matriz[0] == '+'))
        i++;
    if(!matriz[i])
        return false;
    while(matriz[i])
    {
        if(!(matriz[i] >= '0' )|| !(matriz[i] <= '9'))
            return false;
        i++;
    }
    return true;
}

void    parse_and_fill(char** matriz, t_node **stack_A, int flag)
{
    int i;
    long n_matriz;
    i = 0;
    while(matriz[i])
    {
        if(!is_valid_syntax(matriz[i]))
                errorclear(stack_A, matriz, flag);
        n_matriz = ft_atol(matriz[i]);
        if(n_matriz < INT_MIN || n_matriz > INT_MAX)
           errorclear(stack_A, matriz, flag);
        if (1 == (is_duplicate(*stack_A, (int)n_matriz)))
            errorclear(stack_A, matriz, flag);
        ft_add_bottom(stack_A, ft_new_node(n_matriz));
        i++;
    }
    if(flag == 1)
        ft_matriz_clear(matriz);
}
