/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid <gishqaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:49:47 by gishqaid          #+#    #+#             */
/*   Updated: 2023/01/29 14:35:58 by gishqaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (0);
	pointer = (char *)malloc(count * size);
	if (!pointer)
		return (NULL);
	return (ft_memset(pointer, 0, size * count));
}
