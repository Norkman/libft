#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	k;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	k = 0;
	while (src[k] != '\0')
	{
		dst[k + len_dst] = src[k];
		k++;
	}
	dst[k + len_dst - 1] = '\0';
	return (k + len_dst);
}
