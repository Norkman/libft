#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long int	i;
	unsigned char		a;
	unsigned char		*arr;

	a = (unsigned char)c;
	arr = s;
	i = 0;
	while (i < n)
	{
		arr[i] = a;
		i++;
	}
	return (s);
}