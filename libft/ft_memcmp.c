/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:40:28 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/22 20:34:20 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*pstr1;
	unsigned char	*pstr2;
	size_t			i;

	pstr1 = (unsigned char *)str1;
	pstr2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)pstr1[i] != (unsigned char)pstr2[i])
			return ((unsigned char)pstr1[i] - (unsigned char)pstr2[i]);
		i++;
	}
	return (0);
}
