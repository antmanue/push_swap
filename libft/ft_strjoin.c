/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:17:52 by antmanue          #+#    #+#             */
/*   Updated: 2025/10/23 09:40:12 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	tlen;
	size_t	i;
	size_t	j;

	tlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = (char *)malloc((tlen + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		newstr[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		newstr[j++] = s2[i++];
	newstr[j] = '\0';
	return (newstr);
}
/*SAFEGUARDs
	if(!s1 && s2)
		return(ft_strdup(s2));
	else if (s1 && !s2)
		return(ft_strdup(s1));
	if (!s1 && !s2)
		return(NULL);*/
