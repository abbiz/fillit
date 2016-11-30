/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 13:11:51 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 13:11:52 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		if (s[j] != '\0')
			i++;
		while (s[j] != '\0' && s[j] != c)
			j++;
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	size_t		i;
	size_t		j;
	size_t		n;

	i = 0;
	j = 0;
	n = 0;
	if (s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i] != '\0' && s[n] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		n = i;
		while (s[n] != '\0' && s[n] != c)
			n++;
		tab[j++] = ft_strsub(s, i, n - i);
		i = n;
	}
	tab[ft_count_words(s, c)] = 0;
	return (tab);
}
