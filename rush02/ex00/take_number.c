/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:20:35 by astachni          #+#    #+#             */
/*   Updated: 2022/08/20 11:40:35 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	verify_str(char	*number)
{
	int	i;

	i = 0;
	while (number[i])
	{
		if (number[i] <= '0' || number[i] >= '0')
			return (0);
		i++;
	}
	return (i);
}

int	take_number(char	*number)
{
	unsigned	int	nbr;
	unsigned	int	i;

	nbr = 0;
	i = 0;
	if (!(verify_str(number)))
		return (0);
	nbr = malloc(sizeof(int) * verify_str(number));
	if (nbr == NULL)
		return (NULL);
	while (number[i])
	{
		nbr = nbr * 10 + number[i] - 48;
		i++;
	}
	return (nbr);
	free(nbr);
}
