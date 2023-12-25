#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

//fonctions libc
void *ft_memset(void *s, int c, size_t len);
void *ft_bzero(void *s, size_t num);
void *memcpy(void *dest, const void * src, size_t len);
int ft_isalspha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);

#endif