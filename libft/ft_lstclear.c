/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:50:38 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/27 15:17:46 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*current;

	if (lst && del)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}
/*
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *list = NULL;
	
	// Criar uma lista com conteúdo alocado dinamicamente
	char *str1 = ft_strdup("Primeiro");
	char *str2 = ft_strdup("Segundo");
	char *str3 = ft_strdup("Terceiro");
	
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	t_list *node3 = ft_lstnew(str3);
	
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	
	// Mostrar lista antes de limpar
	t_list *current = list;
	printf("Lista antes de limpar:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	// Limpar a lista
	ft_lstclear(&list, del_content);
	
	// Verificar se a lista está vazia
	printf("\nLista após limpar:\n");
	if (list == NULL)
		printf("Lista está vazia\n");
	else
		printf("ERRO: Lista não está vazia\n");
	
	return (0);
}*/