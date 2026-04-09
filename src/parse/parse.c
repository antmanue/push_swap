/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:03:41 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/09 11:26:11 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void errorexit(char *msg, int n)
{
    write(2, msg, n);
    exit(1);
}

int ft_strisrepeat(char **matriz)
{
    int i;
    int j;
    
    i = 0;

    while(matriz[i])
    {
        j = i + 1;
        while(matriz[j])
        {
            if(0 == (ft_strcmp(matriz[i], matriz[j])))
                return(0);
            j++;
        }
        i++;
    }
    return(1);
}

void    parse_and_fill(char** matriz, t_node **stack_A)
{
    int i;
    long n_matriz;
    i = 0;
    
    while(matriz[i])
    {
        if(0 == (ft_strisdigit(matriz[i])))
            errorexit("Error\n", 6);
        i++;
    }
    if (0 == (ft_strisrepeat(matriz)))
        errorexit("Error\n", 6);
    i = 0;
    while(matriz[i])
    {
        n_matriz = ft_atol(matriz[i]);
        if(n_matriz > INT_MAX)
            errorexit("Error\n", 6);

        ft_add_bottom(stack_A, ft_new_node(n_matriz));
        i++;
    }
}
