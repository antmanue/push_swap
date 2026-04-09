/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:41:27 by antmanue          #+#    #+#             */
/*   Updated: 2025/11/04 12:44:32 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_pf_fd(va_arg(args, int), 1));
	else if (c == 's')
		return (ft_putstr_pf_fd(va_arg(args, char *), 1));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_pf_fd(va_arg(args, int), 1));
	else if (c == 'u' )
		return (ft_putnbr_u_pf_fd(va_arg(args, unsigned int), 1));
	else if (c == 'x' )
		return (ft_putnbr_hex(va_arg(args, unsigned int),
				"0123456789abcdef", 1));
	else if (c == 'X' )
		return (ft_putnbr_hex(va_arg(args, unsigned int),
				"0123456789ABCDEF", 1));
	else if (c == 'p')
		return (ft_putpointer(va_arg(args, void *), 1));
	else if (c == '%')
		return (ft_putchar_pf_fd('%', 1));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			count += ft_format(str[i], args);
		}
		else
			count += ft_putchar_pf_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
/*
#include "ft_printf.h" // Inclui o NOSSO livro de receitas para usar o ft_printf
#include <stdio.h>    // Inclui o livro de receitas do printf ORG
#include <limits.h>   // Para testar números muito grandes
#include <stddef.h>   // Para garantir que NULL está bem definido (boa prática)

int	main(void)
{
	char	*s_null;
	int		count_ft;
	int		count_orig;
	int		d;
	char	*test_str;

	s_null = NULL;
	d = 42;
	test_str = "Programadores";

	ft_printf("--- TESTE DE FUNCIONAMENTO ---\n");
	
	// Teste %p: Onde usamos o void * puro!
	ft_printf("O endereço do seu nome (%s) é:\n", test_str);
	count_ft = ft_printf("Meu P: %p\n", test_str);
	count_orig = printf("Orig P: %p\n", test_str);
	ft_printf("Meu contador: %d | Orig contador: %d\n\n", count_ft, count_orig);

	// Teste %d e %i
	ft_printf("O meu: %d, %i. O maior negativo: %i.\n", d, 10, INT_MIN);
	printf("Orig:  %d, %i. O maior negativo: %i.\n\n", d, 10, INT_MIN);

	// Teste %s e %c
	ft_printf("O meu: Letra %c e palavra nula: %s\n", 'Z', s_null);
	printf("Orig:  Letra %c e palavra nula: %s\n\n", 'Z', s_null);
	
	// Teste %x e %X
	ft_printf("O meu: Hex min: %x. Hex MAI: %X.\n", 255, 255);
	printf("Orig:  Hex min: %x. Hex MAI: %X.\n\n", 255, 255);
	
	return (0);
}*/