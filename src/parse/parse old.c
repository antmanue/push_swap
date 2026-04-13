/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:03:41 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/13 17:19:09 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
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

int    ft_isrepeat(t_node **stack_A)
{
    t_node *temp;
    t_node *temp2;
    
    temp    = *stack_A;
    while(temp)
    {
        temp2 = temp->next;
        while(temp2)
        {
            if (temp->value == temp2->value)
            {
                printf("SOU IGUAL!");
                return(1);
            }
            temp2 = temp2->next;
            printf("nao sou iguaL");
        }
        temp = temp->next;
    }
    return(0);    
}

void    ft_parse_digit(char *matriz, t_node **stack_A)
{
    int i;

    i = 0;
    if((matriz[0] == '-' || matriz[0] == '+'))
        i++;
    if(!matriz[i])
    {
        ft_matriz_clear(&matriz);
        ft_stackclear(stack_A);
        errorexit("Error\n", 6);
    }
    while(matriz[i])
    {   
        if(!(matriz[i] >= '0' && matriz[i] <= '9'))
        {
            ft_matriz_clear(&matriz);
            ft_stackclear(stack_A);
            errorexit("Error\n", 6); 
        }      
        i++;    
    }

}

void    parse_and_fill(char** matriz, t_node **stack_A, int flag)
{
    int i;
    long n_matriz;
    i = 0;
    while(matriz[i])
    {
        ft_parse_digit(matriz[i], stack_A);
        n_matriz = ft_atol(matriz[i]);

        if(n_matriz < INT_MIN || n_matriz > INT_MAX)
        {
            ft_matriz_clear(matriz);
            ft_stackclear(stack_A);
            errorexit("Error\n", 6);
        }
        ft_add_bottom(stack_A, ft_new_node(n_matriz));
        i++;
    }
    ft_matriz_clear(matriz);
    if (1 == (ft_isrepeat(stack_A)))
    {
        ft_stackclear(stack_A);
        errorexit("Error\n", 6);
    }
}
