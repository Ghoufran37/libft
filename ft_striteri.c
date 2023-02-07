/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid <gishqaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:59:43 by gishqaid          #+#    #+#             */
/*   Updated: 2023/01/23 15:54:38 by gishqaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void f(unsigned int i, char *str)
{
	*str = *str + 1;
}

int main()
{
	char str1[] = "abc";
	ft_striteri(str1, *f);
	printf("%s\n", str1);
}*/
