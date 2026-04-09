/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:38:34 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/09 17:36:31 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static void debug(t_node **stack)
{
    t_node *temp = *stack;
    while(temp)
    {
        ft_printf("%d\n", temp->value);
        temp = temp->next;
    }
}


int main(int ac, char **av)
{
    char **matriz;
    t_node *stack_A;
    t_node *stack_B;
    
    matriz = NULL;
    stack_A = NULL;
    stack_B = NULL;

    if (ac == 1 || (!(av[1][0])))
        return(0);
    else if(ac ==  2)
        matriz = ft_split(av[1], ' ');
    else
        matriz = av + 1;

    parse_and_fill(matriz, &stack_A);
    ft_printf("stack A\n");
    debug(&stack_A);
    debug(&stack_B);
    ft_printf("stack A\n");
    debug(&stack_A);
    ft_printf("stack B\n");
    debug(&stack_B);
    pa(&stack_A, &stack_B);
    ft_printf("stack A\n");
    debug(&stack_A);
    ft_printf("stack B\n");
    debug(&stack_B);
    
    return(0);
    
}
