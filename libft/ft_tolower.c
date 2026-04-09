/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:46:43 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/15 11:09:24 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	
	printf("Null:  %i\n", ft_tolower('\0'));
	printf("Numero: %i\n", ft_tolower('1'));
	printf("Letra M: %i\n", ft_tolower('A'));
	printf("Letra m: %i\n", ft_tolower('a'));

	printf("Null:  %c\n", ft_tolower('\0'));
	printf("Numero: %c\n", ft_tolower('1'));
	printf("Letra M: %c\n", ft_tolower('A'));
	printf("Letra m: %c\n", ft_tolower('a'));
	return(0);
}*/