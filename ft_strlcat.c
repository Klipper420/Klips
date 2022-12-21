/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiam <hiam@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:00:14 by hiam              #+#    #+#             */
/*   Updated: 2022/12/06 17:01:30 by hiam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	i = 0;
	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}
