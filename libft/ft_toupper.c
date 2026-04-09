/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:46:43 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/15 11:05:06 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	
	printf("Null:  %i\n", ft_toupper('\0'));
	printf("Numero: %i\n", ft_toupper('1'));
	printf("Letra M: %i\n", ft_toupper('A'));
	printf("Letra m: %i\n", ft_toupper('a'));

	printf("Null:  %c\n", ft_toupper('\0'));
	printf("Numero: %c\n", ft_toupper('1'));
	printf("Letra M: %c\n", ft_toupper('A'));
	printf("Letra m: %c\n", ft_toupper('a'));
	return(0);
}*/