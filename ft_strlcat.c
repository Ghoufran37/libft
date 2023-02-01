/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid <gishqaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:13:37 by gishqaid          #+#    #+#             */
/*   Updated: 2023/01/22 11:24:57 by gishqaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int				src_size;
	unsigned int	dest_size;
	unsigned int	i;

	i = 0;
	src_size = 0;
	dest_size = 0;
	while (src[src_size])
		src_size++;
	if (dstsize == 0)
		return (src_size);
	while (dest_size < dstsize && dest[dest_size])
		dest_size++;
	if (dstsize <= dest_size)
		return (dstsize + src_size);
	i = 0;
	while (dstsize && (--dstsize - dest_size) && src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (src_size + dest_size);
}
/*
size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	unsigned int	dstlen;
	int	srclen;
	unsigned int	i;

	i = 0;
	dstlen = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	while (dstlen < dstsize && dest[dstlen])
		dstlen++;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while (src[i] && dstlen + 1 < dstsize)
	{
		dest[dstlen + i] = src[i];
		dstlen++;
		i++;
	}
	dest[dstlen + i] = '\0';
	return (srclen + dstlen);
}
*/