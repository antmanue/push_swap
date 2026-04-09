/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:40:14 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/23 18:41:31 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

// Função de teste
void	example_func(unsigned int i, char *c)
{
	if (i % 2 == 1 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
int	main(void)
{
	char str[] = "hello! world!";
	
	printf("Original string: \"%s\"\n", str);
	
	ft_striteri(str, &example_func);
	printf("After ft_striteri: \"%s\"\n", str);
	
	return (0);
}
*/