#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	int	*arr;
	int	i;

	i = 0;
	arr = malloc(n*sizeof(*arr) + 1);
	arr[n] = NULL;
	while (i < n)
	{
		arr[i] = c;
		i++;
	}

}
