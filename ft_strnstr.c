/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:46:28 by nle-bret          #+#    #+#             */
/*   Updated: 2021/11/26 11:22:47 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;
	char	*big_tmp;

	i = 0;
	big_tmp = (char *)big;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len)
	{
		if (big[i] == little[i])
		{
			k = 0;
			while (big[i] == little[k])
			{
				if (little[k])
					return (big_tmp);
				i++;
				k++;
				big_tmp++;
			}
		}
		i++;
	}
	return (NULL);
}
