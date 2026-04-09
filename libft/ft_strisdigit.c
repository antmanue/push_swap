/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antmanue <antmanue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 16:00:30 by antmanue          #+#    #+#             */
/*   Updated: 2026/04/07 16:17:09 by antmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strisdigit(char* str)
{
    int i;
    i = 0;
    
    while(str[i])
    {
        if(1 == (ft_isdigit(str[i])))
            i++;
        else
            return(0);
    }
    return(1);
}