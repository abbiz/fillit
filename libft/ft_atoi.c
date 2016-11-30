/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abizeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 12:57:23 by abizeau           #+#    #+#             */
/*   Updated: 2015/12/09 12:57:31 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nb;
	char	sign;
	size_t	i;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0' && ft_isspace((unsigned char)(str[i])))
		i++;
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && ft_isdigit((unsigned char)(str[i])))
	{
		nb = nb * 10;
		nb = nb + (str[i] - '0');
		i++;
	}
	return (sign * nb);
}
