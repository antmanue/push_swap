/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:38:34 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 11:51:09 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	debug(t_node **stack)
{
	t_node	*temp;

	temp = *stack;
	while (temp)
	{
		ft_printf("%d\n", temp->value);
		temp = temp->next;
	}
}

void	sort_stack(t_node **stack_a, t_node **stack_b)
{
	int	len;

	len = ft_stacksize(*stack_a);
	ft_init_index(*stack_a);
	if (len == 2)
		sa(stack_a);
	else if (len == 3)
		sort_three(stack_a);
	else if (len == 4)
		sort_four(stack_a, stack_b);
	else if (len == 5)
		sort_five(stack_a, stack_b);
	else
		radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	char	**matriz;
	int		is_split;
	t_node	*stack_a;
	t_node	*stack_b;

	is_split = 0;
	matriz = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1 || (!(av[1][0])))
		return (0);
	else if (ac == 2)
	{
		matriz = ft_split(av[1], ' ');
		is_split = 1;
	}
	else
		matriz = av + 1;
	parse_and_fill(matriz, &stack_a, is_split);
	sort_stack(&stack_a, &stack_b);
	debug(&stack_a);
	ft_stackclear(&stack_a);
	return (0);
}
