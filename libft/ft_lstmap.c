/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:03:43 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/27 15:20:03 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
/*
// Função para mapear o conteúdo da lista (exemplo: converter para maiúsculas)
void *convert_to_upper(void *content)
{
	char *str = ft_strdup((char *)content);
	int i = 0;
	
	if (!str)
		return (NULL);
	
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	
	return (str);
}

// Função para deletar o conteúdo
void delete_content(void *content)
{
	free(content);
}

int main(void)
{
	// Criar lista original
	t_list *list = NULL;
	t_list *node1 = ft_lstnew(ft_strdup("primeiro"));
	t_list *node2 = ft_lstnew(ft_strdup("segundo"));
	t_list *node3 = ft_lstnew(ft_strdup("terceiro"));
	
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	
	// Imprimir lista original
	t_list *current = list;
	printf("Lista original:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	// Mapear lista
	t_list *mapped_list = ft_lstmap(list, convert_to_upper, delete_content);
	
	// Imprimir lista mapeada
	current = mapped_list;
	printf("\nLista mapeada (maiúsculas):\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	// Limpar memória
	ft_lstclear(&list, delete_content);
	ft_lstclear(&mapped_list, delete_content);
	
	return (0);
}*/