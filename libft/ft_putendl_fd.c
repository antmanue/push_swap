/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:24:45 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/24 13:25:14 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>
//#include <unistd.h>
//#include <stdio.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, "\n", 1);
}
/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	ft_putendl_fd("Olá, mundo!", 1);
	ft_putendl_fd("", 1);
	int	fd = open("ft_putendl_fd_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd < 0)
	{
		perror("Erro ao abrir o arquivo");
		return (1);
	}
	ft_putendl_fd("Esta linha será escrita no arquivo.", fd);
	ft_putendl_fd("E esta também.", fd);
	close(fd);
	return (0);
}
*/