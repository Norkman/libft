#include "libft.h"
#include "stdio.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long int	i;
	char		*dst2;
	char		*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst2 > src2)
	{
		i = len - 1;
		while (i >= 0)
		{		
			dst2[i] = src2[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while ((size_t)i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (dst);
}
