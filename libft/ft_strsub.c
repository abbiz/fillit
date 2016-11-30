/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:12:07 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 13:12:08 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (s != NULL)
	{
		if ((str = ft_strnew(len)) == NULL)
			return (NULL);
		else
			return (ft_strncpy(str, s + start, len));
	}
	return (NULL);
}
