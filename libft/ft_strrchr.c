/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:00:17 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/22 20:24:06 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*lstchr;

	i = -1;
	lstchr = 0;
	while (str[++i] != '\0')
		if (str[i] == (char)c)
			lstchr = (char *)&str[i];
	if (str[i] == (char)c)
		return ((char *) &str[i]);
	return (lstchr);
}
/*
int	main(void)
{
	printf("De levezinho: %s \n", ft_strrchr("Abcg do Ruigzao da Manga!!", 'g'));
	return (0);
}*/