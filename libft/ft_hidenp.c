/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hidenp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 16:54:53 by abizeau           #+#    #+#             */
/*   Updated: 2016/11/18 16:33:16 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hidenp(char *str1, char *str2)
{
	size_t	a;
	size_t	i;
	size_t	j;

	a = 0;
	i = 0;
	j = 0;
	while (str2[j] != '\0')
	{
		if (str2[j] == str1[i])
		{
			a++;
			i++;
			j++;
		}
		else
			j++;
	}
	if (a == ft_strlen(str1))
		ft_putchar('1');
	else
		ft_putchar('0');
}
