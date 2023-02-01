/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid <gishqaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:17:05 by gishqaid          #+#    #+#             */
/*   Updated: 2023/01/29 14:02:31 by gishqaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t	i;
	size_t	find_size;

	i = 0;
	find_size = ft_strlen(to_find);
	if (!find_size)
		return ((char *) str);
	if (!size)
		return (0);
	while (str[i] && i + find_size <= size)
	{
		if (!ft_strncmp(&str[i], to_find, find_size))
			return ((char *) &str[i]);
		i++;
	}
	return (0);
}
