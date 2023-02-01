/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid <gishqaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:23:12 by gishqaid          #+#    #+#             */
/*   Updated: 2023/01/17 13:54:17 by gishqaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	val;
	int	sign;
	int	count;

	val = 0;
	sign = 1;
	count = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		count++;
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	if (count > 1)
		sign = 0;
	while (*str >= '0' && *str <= '9')
	{
		val = val * 10 + *str - '0';
		str++;
	}
	return (val * sign);
}

/*int main()
{
	int atio_v;
	
	atio_v = ft_atoi("  -+6847593");
	printf("ft_atoi %d \n", atio_v);

	printf("atoi %d \n", atoi("  -+6847593"));
}*/