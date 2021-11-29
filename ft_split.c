/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-bret <nle-bret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:14:30 by nle-bret          #+#    #+#             */
/*   Updated: 2021/11/29 15:57:43 by nle-bret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_constmat(int word, char *str, char c)
{
	int	i;
	int	k;
	int	j;
	char	**mat;

	i = 0;
	k = 0;
	j = 0;
	mat = malloc(sizeof(*mat) * (word + 1));
	if (mat == NULL)
		return (NULL);
	mat[word] = '\0';
	while (k < word)
	{
		while (str[i] == c && str[i])
			i++;
		j = i;
		while (str[i] != c && str[i])
			i++;
		mat[k] = ft_substr(str, j, i - j);
		k++;
	}
	return (mat);
}

int	ft_countword(char *str, char c)
{
	int	count;
	int	i;
	int	len;

	count = 0;
	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != c)
			i++;
		count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int	word;
	char	**mat;
	char	*str;
	
	str = (char *)s;
	word = ft_countword(str, c);
	mat = ft_constmat(word, str, c);
	return (mat);
}
