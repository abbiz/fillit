/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:07:03 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 13:08:50 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (s1 != NULL && s2 == NULL)
		return (ft_strdup(s1));
	else if (s1 == NULL && s2 != NULL)
		return (ft_strdup(s2));
	else if (s1 != NULL && s2 != NULL)
	{
		if ((str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))) == NULL)
			return (NULL);
		ft_strcpy(str, s1);
		return (ft_strcat(str, s2));
	}
	return (NULL);
}
