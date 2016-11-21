#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

# define BUF_SIZE 4200

char			*ft_open(char *file, char *buf);
void			ft_error();

#endif
