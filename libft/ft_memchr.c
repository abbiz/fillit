/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:59:54 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 12:59:55 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	if (s == NULL || n == 0)
		return (NULL);
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}
