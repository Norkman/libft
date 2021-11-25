#include "libft.h"

int	ft_toupper(int c)
{
	char	tmp;

	tmp = (char)c;
	if (tmp >= 'a' && tmp <= 'z')
		return (c - 32);
	return (c);
}
