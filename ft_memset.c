/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid <gishqaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:09:03 by gishqaid:wq       #+#    #+#             */
/*   Updated: 2023/01/23 15:34:04 by gishqaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	if (len == 0)
		return (b);
	p = (unsigned char *)b;
	while (len)
	{
		p[--len] = (unsigned char)c;
	}
	return (b);
}

/*
int main(void)
{
	char str[50] = "This is my library function";
	//strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '$', 5);
	puts(str);
	return (0);
}
*/
