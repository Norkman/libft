#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

int main (int argc, char **argv)
{
	(void)argc;
	(void)argv;
	//printf("%d", ft_isalpha(argv[1]));
	//printf("%d", ft_isdigit(argv[1]));
	//printf("%d", ft_isalnum(argv[1]));
	//printf("%d", ft_isascii(argv[1]));
	//printf("%d", ft_isprint(argv[1]));
	//printf("%d", ft_strlen(argv[1]));
	//ft_memset(argv[1], '$', 8*sizeof(*argv[argc - 1]));
	//printf("%s", argv[1]);
	//ft_bzero(argv[1] + 4, 6*sizeof(*argv[argc - 1]));

	//printf("%s", argv[1]);
	char str1[16] = "salut bonjour";
	char str2[16] = "salut bonjour";
	//ft_memmove(str1 + 5, str1, 7);
	//memmove(str2 + 5, str2, 7);
	//assert(strcmp(str1, str2) == 0);
	
	int n = 6;
	char dest1[10] = "\0sdfd";
	char dest2[10] = "\0sdfd";
	ft_strlcpy(dest1, str1, n);
	strlcpy(dest2, str2, n);
	printf("%s --> %ld\n", dest1, ft_strlcpy(dest1, str1, n));
	printf("%s --> %ld\n", dest2, strlcpy(dest2, str2, n));
	//assert(strcmp(dest1, dest2) == 0);
	return (0);
}
