/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:40:07 by antmanue          #+#    #+#             */
/*   Updated: 2025/11/04 12:39:05 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);

int	ft_format(char c, va_list args);

int	ft_putchar_pf_fd(char c, int fd);
int	ft_putstr_pf_fd(char *s, int fd);
int	ft_putnbr_pf_fd(int n, int fd);
int	ft_putnbr_u_pf_fd(unsigned int n, int fd);

int	ft_putnbr_hex(unsigned long n, char *hex, int fd);
int	ft_putpointer(void *pointer, int fd);

#endif