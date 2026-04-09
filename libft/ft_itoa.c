/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:42:13 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/27 18:46:34 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static void	ft_int_to_char(unsigned int number, char *nbr, int i)
{
	while (number > 0)
	{
		nbr[i] = '0' + (number % 10);
		number = number / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int				i;
	char			*nbr;
	unsigned int	number;

	i = ft_int_len(n);
	nbr = (char *)malloc(sizeof(char) * (i + 1));
	if (!nbr)
		return (NULL);
	nbr[i--] = '\0';
	if (n == 0)
	{
		nbr[0] = '0';
	}
	if (n < 0)
	{
		nbr[0] = '-';
		n = n * -1;
	}
	number = n;
	ft_int_to_char(number, nbr, i);
	return (nbr);
}
