/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:13:41 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/15 11:45:28 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nbr)
{
	int	sum;
	int	sign;

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
/*l22:verificacao do primeiro sinal*/
/*l24:verificacao do primeiro sinal*/
/*l30:converte enquanto for numero*/
/*
int	main(int arg, char	**argv)
{
	printf ("Numero:  %i\n", ft_atoi(argv[1]));
	return (0);
}*/
