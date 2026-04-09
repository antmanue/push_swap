/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:57:54 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/23 09:38:03 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	real_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len || len == 0)
		return (ft_strdup(""));
	if (len > (s_len - start))
		real_len = (s_len - start) + 1;
	if (len <= s_len - start)
		real_len = len + 1;
	substr = (char *)malloc((real_len) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, (s + start), real_len);
	return (substr);
}
