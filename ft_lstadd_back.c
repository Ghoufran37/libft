/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gishqaid <gishqaid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:31:30 by gishqaid          #+#    #+#             */
/*   Updated: 2023/01/29 14:58:37 by gishqaid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*addbk;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	addbk = ft_lstlast(*lst);
	addbk->next = new;
}
