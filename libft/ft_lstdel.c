/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:55:41 by abizeau           #+#    #+#             */
/*   Updated: 2016/08/25 07:32:26 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*tmp;

	next = (*alst)->next;
	if (alst != NULL)
	{
		while (next != NULL)
		{
			tmp = next->next;
			ft_lstdelone(&next, del);
			free(next);
			next = tmp;
		}
		(*alst)->next = NULL;
		ft_lstdelone(alst, del);
	}
}
