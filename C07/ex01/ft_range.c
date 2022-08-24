/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:08:31 by astachni          #+#    #+#             */
/*   Updated: 2022/08/24 13:03:47 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*table;
	int	i;

	i = 0;
	range = max - min;
	table = malloc(sizeof(int *) * (range));
	if (min >= max || table == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		table[i] = min;
		min++;
		i++;
	}
	return (&table[0]);
}
