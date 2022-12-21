/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiam <hiam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:25:19 by hiam              #+#    #+#             */
/*   Updated: 2022/12/07 12:20:00 by hiam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char *i;
    
    i = (char *)s;
	while (*i != c)
    {
    if (!*i)
			return (NULL);
        i++;
    }
    return(i);
}