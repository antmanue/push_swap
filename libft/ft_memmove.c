/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:21:53 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/22 20:30:35 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptmpdest;
	unsigned char	*ptmpsrc;

	ptmpdest = (unsigned char *)dest;
	ptmpsrc = (unsigned char *)src;
	if (ptmpdest == ptmpsrc || n == 0)
		return (dest);
	if (ptmpdest < ptmpsrc)
		while (n-- > 0)
			*ptmpdest++ = *ptmpsrc++;
	else
	{
		ptmpdest += n - 1;
		ptmpsrc += n - 1;
		while (n-- > 0)
			*ptmpdest-- = *ptmpsrc--;
	}
	return (dest);
}
