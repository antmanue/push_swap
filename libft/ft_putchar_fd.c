/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:26:10 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/24 13:16:12 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int		fd;
	char	c;

	// Testando saída para o console (file descriptor padrão: 1)
	c = 'A';
	ft_putchar_fd(c, 1);
	ft_putchar_fd('\n', 1);
	// Testando saída para um arquivo
	fd = open("putchar_test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		write(2, "Erro ao abrir o arquivo.\n", 26);
		return (1);
	}
	ft_putchar_fd('B', fd);
	ft_putchar_fd('\n', fd);
	close(fd);
	return (0);
}*/