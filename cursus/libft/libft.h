#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

//fonctions libc
void *ft_memset(void *s, int c, size_t len);
void *ft_bzero(void *s, size_t num);
void *memcpy(void *dest, const void * src, size_t n);
int ft_isalpha(int c);

#endif