/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:19:43 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/23 09:35:54 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*pstr1;
	size_t	len;
	size_t	i;

	len = ft_strlen(str1) + 1;
	i = 0;
	pstr1 = ft_calloc(len, sizeof(char));
	if (!pstr1)
		return (NULL);
	while (str1[i] != '\0')
	{
		pstr1[i] = str1[i];
		i++;
	}
	return (pstr1);
}
