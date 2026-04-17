/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:17:57 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 11:47:57 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*
int	main(void)
{
	
	printf("Null:  %i\n", ft_isdigit('\0'));
	printf("Numero: %i\n", ft_isdigit('2'));
	printf("Letra: %i\n", ft_isdigit('A'));
	return(0);
}*/