/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 08:34:24 by nle-bret          #+#    #+#             */
/*   Updated: 2022/01/13 17:11:15 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;
	int			w;

	nbr = n;
	if (nbr < 0)
	{				
		write(fd, "-", 1);
		nbr = -nbr;
	}			
	if (nbr / 10)
		ft_putnbr_fd(nbr / 10, fd);
	w = nbr % 10 + '0';
	write(fd, &w, 1);
}
