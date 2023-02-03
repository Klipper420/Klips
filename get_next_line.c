/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamoud <hhamoud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:41:11 by abiru             #+#    #+#             */
/*   Updated: 2023/02/03 16:24:59 by hhamoud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char *get_next_line(int fd)
{
    
}

    int i;
    char *s;

    s = malloc(100);
    if (!s)
        return(0);
    i = open("fuk.txt",O_RDONLY);
    if (i == -1)
        return(0);
    char *str = 0;
    while (read(i, s, BUFFER_SIZE))
    {
        ft_strjoin(str, s);
        free(s);
    }    
    printf("%s",str);
