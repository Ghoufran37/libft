/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid <gishqaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:11:58 by gishqaid:wq       #+#    #+#             */
/*   Updated: 2023/01/17 14:09:38 by gishqaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n)
	{
		p[--n] = 0;
	}
}
/*
int main()
{
	char ptr[] = "fhskdfk";
	char str[] = "fhskdfk";
	ft_bzero(ptr, 1);
	printf("ft_bzero %s \n", ptr);
	bzero(str,1);

	printf("bzero %s \n", str);
}*/