/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:42:53 by astachni          #+#    #+#             */
/*   Updated: 2022/08/23 13:17:31 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	get_size(char **strs)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (strs[i][j])
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		i++;
	}
	return (i + j);
}

int	get_size_s(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char **src, char *sep, int size)
{
	int	incr[4];

	incr[0] = 0;
	incr[1] = 0;
	incr[2] = 0;
	while (incr[0] < size)
	{
		incr[1] = 0;
		while (src[incr[0]][incr[1]])
		{
			dest[incr[2]] = src[incr[0]][incr[1]];
			incr[2]++;
			incr[1]++;
		}
		incr[3] = 0;
		while (sep[incr[3]] != '\0' && incr[0] < size - 1)
		{
			dest[incr[2]] = sep[incr[3]];
			incr[2]++;
			incr[3]++;
		}
		incr[1] = 0;
		incr[0]++;
	}
	dest[incr[2]] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_all;
	int		size_sep;
	char	*dest;

	if (size == 0)
		return (NULL);
	size_sep = get_size_s(sep);
	size_all = get_size(strs);
	dest = malloc(sizeof(char) * (size_all) + (size_sep * size - 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, strs, sep, size);
	return (dest);
}
