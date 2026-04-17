/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:50:45 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 11:03:07 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief 
 * Criamos um novo node da lista(stack principal) 
 * o valor que recebemos e dois ponteiros a um a apontar
 * para o node antrior(prev) e outro a apontar para o node seguinte(next)

 * @param nb (value)
 * @return t_node* (new_node)
 */
t_node	*ft_new_node(long nb)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = nb;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

/**
 * @brief 
 * Esta funcao percorre a lista enquanto o nodes nao forem nulos
 * e retorna o o temp que aponta para o ultimo node da lista(stack)
 * @param stack 
 * @return t_node* temp (ultimo node da lista).
 */
t_node	*ft_stacklast(t_node *stack)
{
	t_node	*temp;

	temp = stack;
	if (!stack)
		return (NULL);
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}

/**
 * @brief 
 * Esta funcao recebe a nossa lista principal(stack), e o node a adiconar
 * que será colocado na ultima posicao da lista.Fazemos um swap de ponteiros
 * onde no temp apontamos para o ultimo atraves de (ft_lstlast), e depois 
 * colocamos o new node a apontar no prev para o temp e no next para null
 * e o nosso temp que apontava para null passa a apontar para o new node 
 * no seu ponteiro next.
 * 
 * @param stack (lista recebida)
 * @param new_node (node a adicionar)
 */
void	ft_add_bottom(t_node **stack, t_node *new_node)
{
	t_node	*temp;

	temp = *stack;
	if (!stack || !new_node)
		return ;
	if (*stack == NULL)
	{
		*stack = new_node;
		return ;
	}
	temp = ft_stacklast(*stack);
	new_node->prev = temp;
	temp->next = new_node;
}

int	ft_stacksize(t_node *stack)
{
	size_t	count;
	t_node	*temp;

	if (!stack)
		return (0);
	count = 0;
	temp = stack;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

void	ft_stackclear(t_node **stack)
{
	t_node	*temp;

	if (stack && (*stack))
	{
		while (*stack)
		{
			temp = (*stack)->next;
			free(*stack);
			*stack = temp;
		}
	}
}
