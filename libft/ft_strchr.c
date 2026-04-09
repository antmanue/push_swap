/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:48:15 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/22 12:59:39 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = -1;
	while (str[++i] != (char)c)
		if (str[i] == '\0')
			return (NULL);
	return ((char *)&str[i]);
}
/*
int	main(void)
{
	printf("Levezinho: %s \n", ft_strchr("High elo!", 'h'));
	return (0);
}*/