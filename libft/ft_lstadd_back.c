/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:13:50 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/28 09:10:58 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
/*
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof (t_list));
	if (!(node))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	main(void)
{
	t_list *list = NULL;
	

	t_list *node1 = ft_lstnew("Primeiro");
	ft_lstadd_back(&list, node1);
	

	t_list *current = list;
	printf("Lista após adicionar o primeiro elemento:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	

	t_list *node2 = ft_lstnew("Segundo");
	ft_lstadd_back(&list, node2);
	

	current = list;
	printf("\nLista após adicionar o segundo elemento:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	

	t_list *node3 = ft_lstnew("Terceiro");
	ft_lstadd_back(&list, node3);
	

	current = list;
	printf("\nLista após adicionar o terceiro elemento:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	

	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return (0);
}*/