/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:23:12 by antmanue          #+#    #+#             */
/*   Updated: 2025/11/04 12:49:34 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long n, char *hex, int fd)
{
	int	nb_count;

	nb_count = 0;
	if (n >= 16)
		nb_count = nb_count + ft_putnbr_hex(n / 16, hex, fd);
	nb_count = nb_count + ft_putchar_pf_fd(hex[n % 16], fd);
	return (nb_count);
}

int	ft_putpointer(void *pointer, int fd)
{
	unsigned int	adrss_len;

	adrss_len = 0;
	if (!pointer)
		return (ft_putstr_pf_fd("(nil)", fd));
	adrss_len = adrss_len + ft_putstr_pf_fd("0x", 1);
	adrss_len = adrss_len + ft_putnbr_hex((unsigned long)pointer,
			"0123456789abcdef", 1);
	return (adrss_len);
}
