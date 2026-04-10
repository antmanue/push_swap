/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:36:50 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/10 14:40:09 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "../libft/libft.h"
#include "../ft_printf/ft_printf.h"

typedef struct s_node
{
    int             value;
    struct s_node   *next;
    struct s_node   *prev;
}   t_node;

/*--stack_&_list--s*/
t_node *ft_new_node(long nb);
void ft_add_bottom(t_node **stack, t_node *new_node);
int ft_stacksize(t_node *stack);
t_node	*ft_stacklast(t_node *stack);
void ft_stackclear(t_node **stack);

/*--parse--*/
int     ft_strisdigit(char* str);
void    parse_and_fill(char** matriz, t_node **stack_A);

/*--swap--*/
void swap(t_node** stack);
void sa(t_node **stack_A);
void sb(t_node **stack_B);

/*--push--*/
void push(t_node **stack_in, t_node **stack_out);
void pa(t_node **stack_A, t_node **stack_B);
void pb(t_node **stack_B, t_node **stack_A);

/*--rotate--*/
void rotate(t_node **stack);
void ra(t_node **stack_A);
void rb(t_node **stack_B);
void rr(t_node **stack_A, t_node **stack_B);

/*--reverse_rotate-*/
void reverse_rotate(t_node **stack);
void rra(t_node **stack_A);
void rrb(t_node **stack_B);
void rrr(t_node **stack_A, t_node **stack_B);

#endif