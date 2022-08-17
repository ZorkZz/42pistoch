/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:44:09 by astachni          #+#    #+#             */
/*   Updated: 2022/08/16 17:54:42 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			if (i == nb)
				return (1);
			else
				return (0);
		}
		i += 2;
	}
	return (0);
}