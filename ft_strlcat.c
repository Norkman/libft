#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size) 
{
	size_t	len_dst;
	size_t	len_src;
	size_t	k;
	char	*tmp;

	tmp = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(tmp);
	k = 0;
	if (size == 0)
		return (len_src);
	if (size <= len_dst)
		return (size + len_src);
	while (src[k] != '\0' && k + len_dst < size)
	{
		dst[k + len_dst] = src[k];
		k++;
	}
	dst[k + len_dst - 1] = '\0';
	return (len_src + len_dst);
}
