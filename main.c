/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:25:36 by nle-bret          #+#    #+#             */
/*   Updated: 2021/11/26 16:29:25 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	//(void)argv;
	/*//printf("%d", ft_isalpha(argv[1]));
	//printf("%d", ft_isdigit(argv[1]));
	//printf("%d", ft_isalnum(argv[1]));
	//printf("%d", ft_isascii(argv[1]));
	//printf("%d", ft_isprint(argv[1]));
	//printf("%d", ft_strlen(argv[1]));
	//ft_memset(argv[1], '$', 8*sizeof(*argv[argc - 1]));
	//printf("%s", argv[1]);
	//ft_bzero(argv[1] + 4, 6*sizeof(*argv[argc - 1]));
	//printf("%s", argv[1]);
	//char str1[16] = "connard bonjour";
	//char str2[16] = "connard bonjour";
	//ft_memmove(str1 + 5, str1, 7);
	//memmove(str2 + 5, str2, 7);
	//assert(strcmp(str1, str2) == 0);
	//int n = 50;
	//char dest1[40] = "salut";
	//char dest2[40] = "salut";
	//ft_strlcpy(dest1, str1, n);
	//strlcpy(dest2, str2, n);
	//strlcat(dest2, str2, n);
	//printf("%s --> %ld\n", dest2, strlcat(dest2, str2, n));
	//ft_strlcat(dest1, str1, n);
	//printf("%s --> %ld\n", dest1, ft_strlcat(dest1, str1, n));
	//printf("%s --> %ld\n", dest1, ft_strlcpy(dest1, str1, n));
	//printf("%s --> %ld\n", dest2, strlcpy(dest2, str2, n));
	//assert(strcmp(dest1, dest2) == 0);
	//char	c = '\0';
	//char	str1[30] = "www.google.com";
	//char	str2[30] = "www.google.com";
	//printf("%s\n", ft_strrchr(str1, c));
	//printf("%s\n", strrchr(str2, c));
	//int	n = 0;
	//char	str1[30] = "salut tu vas bien ?";
	//char	str2[30] = "salut tu fas bien ?";
	//assert(strncmp(str1, str2, n) - ft_strncmp(str1, str2, n) == 0);*/
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d\n", atoi(argv[1]));
	return (0);
}
