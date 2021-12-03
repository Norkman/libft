/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 08:01:21 by nle-bret          #+#    #+#             */
/*   Updated: 2021/12/03 13:03:35 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long int	i;
	char		*dst2;
	char		*src2;

	if (!dst || !src)
		return (NULL);
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
