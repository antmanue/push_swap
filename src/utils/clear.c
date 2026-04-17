/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 11:09:59 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 11:12:34 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errorexit(char *msg, int n)
{
	write(2, msg, n);
	exit(1);
}

void	ft_matriz_clear(char **matriz)
{
	int	i;

	i = 0;
	if (!matriz || !(matriz[i]))
		return ;
	while (matriz[i])
	{
		free(matriz[i]);
		i++ ;
	}
	free(matriz);
}

void	errorclear(t_node **stack_a, char **matriz, int flag)
{
	if (flag == 1)
	{
		ft_matriz_clear(matriz);
	}
	ft_stackclear(stack_a);
	errorexit("Error\n", 6);
}
