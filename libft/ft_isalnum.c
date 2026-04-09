/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:00:50 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/14 12:34:06 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	
	printf("Null:  %i\n", ft_isalnum('\0'));
	printf("Non AlphaNum:  %i\n", ft_isalnum('$'));
	printf("Null:  %i\n", ft_isalnum(' '));
	printf("Numero: %i\n", ft_isalnum('2'));
	printf("Letra: %i\n", ft_isalnum('A'));
	return(0);
}*/