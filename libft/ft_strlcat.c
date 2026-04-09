/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:04:06 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/22 20:25:07 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	sum_join;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	sum_join = dst_len + src_len;
	if (size <= dst_len)
		return (src_len + size);
	i = 0;
	while (src[i] && (dst_len + 1) < size)
		dst[dst_len++] = src[i++];
	dst[dst_len] = '\0';
	return (sum_join);
}
