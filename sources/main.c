/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneboth <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 20:18:23 by mneboth           #+#    #+#             */
/*   Updated: 2016/11/30 07:50:21 by abizeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static void	ft_error(void)
{
	ft_putendl("error");
	exit(1);
}

int			main(int argc, char **argv)
{
	int		fd;
	char	**tetriminos;
	char	*solution;

	if (argc != 2)
		ft_error();
	if ((fd = open(argv[1], O_RDONLY)) < 0)
		ft_error();
	tetriminos = ft_check_file(fd);
	if (close(fd) < 0)
		ft_error();
	if (tetriminos == NULL)
		ft_error();
	solution = ft_resolve(tetriminos);
	if (solution == NULL)
		ft_error();
	ft_putstr(solution);
	ft_clear_tab(tetriminos);
	free(solution);
	return (0);
}
