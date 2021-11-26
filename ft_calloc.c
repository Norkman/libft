/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:09:42 by nle-bret          #+#    #+#             */
/*   Updated: 2021/11/26 17:36:29 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mat;

	mat = malloc(nmemb * size);
	if (nmemb == 0)
	{
		return (mat);
	}
	ft_bzero(mat, size * nmemb);
	return (mat);
}
