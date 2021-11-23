#include "libft.h"

int	ft_isprint(int a)
{
	if ((a >= 0 && a <= 32) || (a == 127))
		return (0);
	return (1);
}
