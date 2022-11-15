/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiam <@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:25:45 by hiam              #+#    #+#             */
/*   Updated: 2022/10/22 14:25:46 by hiam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    int i ;
    

    i = 0;
    
    while (i < n)
    {
        ((char*)dst)[i] = ((char*)src)[i];
        i++;
    }
    return (dst);
}
 
int main()
{
    char src[]="thebest";
    char dst[15]= "thenigg";
    char src1[]="thebest";
    char dst1[15]="thenigg";
    printf("%s\n",ft_memcpy(dst,src,5));
     printf("%s\n",memcpy(dst1,src1,5));
}

