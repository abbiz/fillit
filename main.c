#include "fillit.h"

char	*ft_open(char *file, char *buf)
{
	int		fd;
	int		ret;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_error();
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (close(fd) == -1)
		ft_error();
	return (buf);
}

void	ft_error(void)
{
	ft_putendl("error");
	exit(0);
}

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE];

	if (argc != 2)
		ft_error();
	ft_putstr(ft_open(argv[1], buf));
	return (0);
}
