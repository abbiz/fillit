/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:59:32 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 12:59:34 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;

	if ((mem = (char *)malloc(sizeof(char) * size)) == 0)
		return (NULL);
	ft_bzero((void *)mem, size);
	return ((void *)mem);
}
