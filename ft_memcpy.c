/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid <gishqaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:08:32 by gishqaid:wq       #+#    #+#             */
/*   Updated: 2023/01/19 18:26:00 by gishqaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if ((n == 0 || dst == src) && (dst == NULL) && (src == NULL))
		return (dst);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
int main(void)
{
	char src[50] = "helloeveryone";
	char dest[50] = "welcome all";
	char *ret;

	ret = ft_memcpy(dest, src, 7);
	printf("%s\n", ret);
	printf("memcpy is: %s\n", memcpy(dest, src, 7));
	return (0);
}*/
