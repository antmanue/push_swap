/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:13:17 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/14 10:27:31 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	
	printf("Null:  %i\n", ft_isalpha('\0'));
	printf("Numero: %i\n", ft_isalpha('1'));
	printf("Letra: %i\n", ft_isalpha('A'));
	return(0);
}*/