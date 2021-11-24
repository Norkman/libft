#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
int	ft_isalpha(int a);
int	ft_isdigit(int a);
int	ft_isalnum(int a);
int	ft_isascii(int a);
int	ft_isprint(int a);
int	ft_strlen(char *a);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

#endif
