/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 15:03:41 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 14:18:45 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_duplicate(t_node *stack_a, int num)
{
	while (stack_a)
	{
		if (stack_a->value == num)
			return (true);
		stack_a = stack_a->next;
	}
	return (false);
}

bool	is_valid_syntax(char *matriz)
{
	int	i;

	i = 0;
	if ((matriz[0] == '-' || matriz[0] == '+'))
		i++;
	if (!matriz[i])
		return (false);
	while (matriz[i])
	{
		if (!(matriz[i] >= '0') || !(matriz[i] <= '9'))
			return (false);
		i++;
	}
	return (true);
}

void	parse_and_fill(char **matriz, t_node **stack_a, int flag)
{
	int		i;
	long	n_matriz;

	i = 0;
	while (matriz[i])
	{
		if (!is_valid_syntax(matriz[i]))
			errorclear(stack_a, matriz, flag);
		n_matriz = ft_atol(matriz[i]);
		if (n_matriz < INT_MIN || n_matriz > INT_MAX)
			errorclear(stack_a, matriz, flag);
		if (1 == (is_duplicate(*stack_a, (int)n_matriz)))
			errorclear(stack_a, matriz, flag);
		ft_add_bottom(stack_a, ft_new_node(n_matriz));
		i++;
	}
	if (flag == 1)
		ft_matriz_clear(matriz);
	if (true == is_sorted(*stack_a))
	{
		ft_stackclear(stack_a);
		exit(1);
	}
}
