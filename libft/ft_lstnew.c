/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:07:24 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/27 18:47:07 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
/*
int	main(void)
{
	// Teste com string
	char *str = "Teste";
	t_list *node1 = ft_lstnew(str);

	if (node1)
	{
		printf("Teste com string: %s\n", (char *)node1->content);
		printf("Next é NULL: %s\n", (node1->next == NULL) ? "Sim" : "Não");
		free(node1);
	}

	// Teste com inteiro (usando alocação dinâmica)
	int *num = malloc(sizeof(int));
	*num = 42;
	t_list *node2 = ft_lstnew(num);

	if (node2)
	{
		printf("Teste com inteiro: %d\n", *(int *)node2->content);
		printf("Next é NULL: %s\n", (node2->next == NULL) ? "Sim" : "Não");
		free(node2->content); // Libera o inteiro alocado
		free(node2);
	}

	// Teste com NULL
	t_list *node3 = ft_lstnew(NULL);

	if (node3)
	{
		printf("Teste com NULL: content é NULL: %s\n",
		(node3->content == NULL) ? "Sim" : "Não");
		printf("Next é NULL: %s\n", (node3->next == NULL) ? "Sim" : "Não");
		free(node3);
	}

	return (0);
}*/