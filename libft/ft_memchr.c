/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:20:49 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/22 20:32:08 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char		*ptmpstr;
	size_t				i;

	i = 0;
	ptmpstr = (unsigned char *)str;
	while (i < n)
	{
		if (ptmpstr[i] == (unsigned char)c)
			return (&ptmpstr[i]);
		i++;
	}
	return (0);
}
