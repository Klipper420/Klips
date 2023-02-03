/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamoud <hhamoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:52:09 by hhamoud           #+#    #+#             */
/*   Updated: 2023/01/08 15:52:19 by hhamoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_overload(char *ptr, char const *s)
{
	int	i;

	i = 0;
	ptr = (char *)malloc(sizeof(*s) * 1);
	if (!ptr)
		return (NULL);
	ptr[i] = 0;
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*ptr;
	unsigned int	size;

	if (!s)
		return (NULL);
	i = 0;
	ptr = NULL;
	size = ft_strlen(s);
	if (start >= size)
		return ((char *)ft_overload(ptr, s));
	if (len > size - start)
		ptr = (char *)malloc(sizeof(*s) * (size - start + 1));
	else
		ptr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len && s[start])
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
