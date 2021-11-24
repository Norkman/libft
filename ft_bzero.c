#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long int	i;
	unsigned char		*arr;

	arr = s;
	i = 0;
	while (i < n)
	{
		arr[i] = '\0';
		i++;
	}
}
