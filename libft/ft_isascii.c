/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:30:29 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/14 13:01:53 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	
	printf("Null:  %i\n", ft_isascii('\0'));
	printf("Numero: %i\n", ft_isascii('1'));
	printf("Letra: %i\n", ft_isascii('A'));
	return(0);
}*/