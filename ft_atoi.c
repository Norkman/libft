/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:24:12 by nle-bret          #+#    #+#             */
/*   Updated: 2021/11/26 17:42:03 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convert(char *str, int i, int num)
{
	while (i < ft_strlen(str) && ft_isdigit(str[i]))
	{
		num = 10 * num + (str[i] - 48);
		i++;
	}
	return (num);
}

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	str = (char *)nptr;
	while (ft_isspace(str[i]))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		num = ft_convert(str, i + 1, num);
	}
	num = ft_convert(str, i, num);
	return (sign * num);
}
