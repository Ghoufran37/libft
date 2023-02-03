/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid:wq <ghoufran-lakem@hotmail.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:48:48 by gishqaid:wq       #+#    #+#             */
/*   Updated: 2023/01/11 19:50:11 by gishqaid:wq      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

/*
int main(void)
{
	char c = '+';
	printf("%d", ft_isprint(c));
	return (0);
}*/
