/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:46:28 by nle-bret          #+#    #+#             */
/*   Updated: 2021/12/03 13:25:21 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	len_of_little;
	char *s;

	s = (char *)big;
	len_of_little = ft_strlen(little);
	i = 0;
	if (little[0] == '\0')
		return (s);
	while (i + len_of_little <= len && big[i])
	{
		k = 0;
		while (big[i + k] == little[k])
		{
			if (little[k + 1] == '\0')
				return (s + i);
			k++;
		}
		i++;
	}
	return (0);
}
