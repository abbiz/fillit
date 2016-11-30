/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:00:37 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 13:00:39 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst != NULL && src != NULL)
	{
		if (dst < src)
			ft_memcpy(dst, src, len);
		else if (src < dst)
		{
			while (len > 0)
			{
				len--;
				((char *)dst)[len] = ((char *)src)[len];
			}
		}
	}
	return (dst);
}
