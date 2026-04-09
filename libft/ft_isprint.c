/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:02:57 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/16 14:28:22 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	
	printf("Null:  %i\n", ft_isprint('\0'));
	printf("Numero: %i\n", ft_isprint('1'));
	printf("Letra: %i\n", ft_isprint('A'));
	return(0);
}*/