/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:47:24 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/17 11:50:11 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nbr)
{
	long	sum;
	long	sign;

	sum = 0;
	sign = 1;
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	if (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign = -sign;
		nbr++;
	}
	while (*nbr >= '0' && *nbr <= '9')
	{
		sum = (sum * 10) + (*nbr - '0');
		nbr++;
	}
	return (sign * sum);
}

/* #include <stdio.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%ld\n", ft_atol(av[1]));
} */