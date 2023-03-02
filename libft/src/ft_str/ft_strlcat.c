/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajimene <sajimene@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:55:34 by sajimene          #+#    #+#             */
/*   Updated: 2023/02/06 18:21:38 by sajimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (src_len);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}
/*
int main() 
{
    char dst[20] = "Hola";
    char src[] = " mundo";
    size_t dstsize = sizeof(dst);
    printf("Longitud antes de concatenar: %lu\n", ft_strlen(dst));
    ft_strlcat(dst, src, dstsize);
    printf("Longitud después de concatenar: %lu\n", ft_strlen(dst));
    printf("String concatenada: %s\n", dst);
    return 0;
}
*/
