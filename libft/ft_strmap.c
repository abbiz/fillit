/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:09:26 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 13:09:27 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*map;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	if ((map = ft_strnew(ft_strlen(s))) == 0)
		return (NULL);
	while (i < ft_strlen(s))
	{
		map[i] = (*f)(s[i]);
		i++;
	}
	return (map);
}
