/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:12:19 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 13:12:34 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (s)
	{
		j = ft_strlen(s) - 1;
		while (s[i] && ft_isspace(s[i]))
			i++;
		while (j > 0 && ft_isspace(s[j]))
			j--;
		j++;
		if (i < j)
		{
			if ((str = ft_strsub(s, i, j - i)))
				return (str);
		}
		else
			return (ft_strnew(0));
	}
	return (NULL);
}
