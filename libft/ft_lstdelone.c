/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:55:19 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/27 15:18:11 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	// Criar uma lista com 3 nós
	char *str1 = ft_strdup("Primeiro");
	char *str2 = ft_strdup("Segundo");
	char *str3 = ft_strdup("Terceiro");
	
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	t_list *node3 = ft_lstnew(str3);
	
	// Ligar os nós
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	
	// Mostar a lista original
	t_list *current = node1;
	printf("Lista original:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	// Deletar o nó do meio
	t_list *temp = node1->next;
	node1->next = node3; // Relinkar a lista pulando o nó do meio
	
	printf("\nDeletando o nó do meio (Segundo)\n");
	ft_lstdelone(temp, del_content);
	
	// Mostrar a lista após a deleção
	current = node1;
	printf("\nLista após deletar o nó do meio:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	// Limpar o restante da memória
	ft_lstdelone(node3, del_content);
	ft_lstdelone(node1, del_content);
	
	return (0);
}*/