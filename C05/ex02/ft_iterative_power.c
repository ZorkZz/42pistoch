/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:32:34 by astachni          #+#    #+#             */
/*   Updated: 2022/08/16 17:47:02 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	nbr;
	int	i;

	nbr = nb;
	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (i < power)
	{
		nb = nbr * nb;
		i++;
	}
	return (nb);
}
