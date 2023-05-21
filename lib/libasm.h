#ifndef	LIBASM_H
# define LIBASM_H

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//ssize_t		ft_write(int, char *, size_t);
//ssize_t		ft_read(int, char *, size_t);
unsigned long	ft_strlen(char *);
char			*ft_strcpy(char *, char *);
int				ft_strcmp(char *, char *);
char			*ft_strdup(char *);

#endif