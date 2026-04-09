/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:25:05 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/28 09:08:45 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int	main(void)
{
	t_list *list = NULL;
	t_list *last_node;
	
	// Teste 1: Lista vazia
	last_node = ft_lstlast(list);
	printf("Último nó de uma lista vazia: %p (deve ser NULL)\n", 
	(void *)last_node);

	// Teste 2: Lista com um elemento
	t_list *node1 = ft_lstnew("Primeiro");
	ft_lstadd_back(&list, node1);
	last_node = ft_lstlast(list);
	printf("Último nó de uma lista com um elemento: %s\n", 
	(char *)last_node->content);

	// Teste 3: Lista com vários elementos
	t_list *node2 = ft_lstnew("Segundo");
	ft_lstadd_back(&list, node2);
	t_list *node3 = ft_lstnew("Terceiro");
	ft_lstadd_back(&list, node3);
	
	last_node = ft_lstlast(list);
	printf("Último nó de uma lista com três elementos: %s\n",
	(char *)last_node->content);

	// Limpar memória
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return (0);
}*/