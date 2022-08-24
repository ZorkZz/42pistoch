/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 21:34:05 by astachni          #+#    #+#             */
/*   Updated: 2022/08/24 00:15:36 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	while (i <= nb)
	{
		if (nb <= 1)
			return (0);
		if (nb == 2)
			return (1);
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		if (nb == 2)
			return (nb);
		if (nb % 2 == 0)
			nb++;
		else
			nb += 2;
	}
	return (nb);
}
