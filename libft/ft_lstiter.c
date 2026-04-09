/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:56:45 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/27 15:19:19 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}
/*
/ Função para exibir o conteúdo (string)
void print_content(void *content)
{
	printf("%s\n", (char *)content);
}

// Função para converter string para maiúsculas in-place
void to_upper(void *content)
{
	char *str = (char *)content;
	int i = 0;
	
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
}

int main(void)
{
	// Criar uma lista
	t_list *list = NULL;
	
	// Adicionar elementos à lista
	char str1[] = "primeiro";
	char str2[] = "segundo";
	char str3[] = "terceiro";
	
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	t_list *node3 = ft_lstnew(str3);
	
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	
	// Mostrar lista original
	printf("Lista original:\n");
	ft_lstiter(list, print_content);
	
	// Converter para maiúsculas
	ft_lstiter(list, to_upper);
	
	// Mostrar lista após conversão
	printf("\nLista após converter para maiúsculas:\n");
	ft_lstiter(list, print_content);
	
	// Limpar a memória
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}
	
	return (0);
}*/