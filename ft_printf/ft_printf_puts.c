/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:00:07 by antmanue          #+#    #+#             */
/*   Updated: 2025/11/04 12:47:20 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr_pf_fd(char *s, int fd)
{
	int	len;

	len = 0;
	if (s == NULL)
		s = "(null)";
	while (s[len])
		len++;
	write(fd, s, len);
	return (len);
}

int	ft_putnbr_pf_fd(int n, int fd)
{
	int	nb;
	int	nb_count;

	nb = n;
	nb_count = 0;
	if (nb == -2147483648)
		return (ft_putstr_pf_fd("-2147483648", 1));
	if (nb < 0)
	{
		nb_count = nb_count + ft_putchar_pf_fd('-', 1);
		nb = -nb;
	}
	if (nb >= 10)
		nb_count = nb_count + ft_putnbr_pf_fd(nb / 10, fd);
	nb_count = nb_count + ft_putchar_pf_fd((nb % 10) + '0', fd);
	return (nb_count);
}

int	ft_putnbr_u_pf_fd(unsigned int n, int fd)
{
	long int	nb_count;

	nb_count = 0;
	if (n >= 10)
		nb_count = nb_count + ft_putnbr_u_pf_fd(n / 10, fd);
	ft_putchar_pf_fd(n % 10 + '0', fd);
	nb_count++;
	return (nb_count);
}
