/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:21:10 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/27 18:50:49 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	nd_count;
	t_list	*temp;

	if (!lst)
		return (0);
	nd_count = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		nd_count++;
	}
	return (nd_count);
}
/*
int	main(void)
{
	t_list *list = NULL;
	int size;
	
	// Teste com lista vazia
	size = ft_lstsize(list);
	printf("Tamanho da lista vazia: %d\n", size);
	
	// Adicionando um elemento
	t_list *node1 = ft_lstnew("Primeiro");
	ft_lstadd_front(&list, node1);
	size = ft_lstsize(list);
	printf("Tamanho da lista com 1 elemento: %d\n", size);
	
	// Adicionando mais elementos
	t_list *node2 = ft_lstnew("Segundo");
	ft_lstadd_front(&list, node2);
	size = ft_lstsize(list);
	printf("Tamanho da lista com 2 elementos: %d\n", size);
	
	t_list *node3 = ft_lstnew("Terceiro");
	ft_lstadd_front(&list, node3);
	size = ft_lstsize(list);
	printf("Tamanho da lista com 3 elementos: %d\n", size);
	
	// Limpeza da memória
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}
	
	return (0);
}*/