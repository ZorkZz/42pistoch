/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:28:18 by astachni          #+#    #+#             */
/*   Updated: 2022/08/16 11:14:16 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

unsigned int	base_converter(char *base)
{
	unsigned int	i0;
	unsigned int	i1;

	i0 = 0;
	while (base[i0] != '\0')
	{
		i1 = i0 + 1;
		while (base[i1] != '\0')
		{
			if (base [i0] == '+' || base[i1] == '-')
				return (0);
			if (base[i0] == base [i1])
			{
				return (0);
			}
			i1 ++;
		}
		i0++;
	}
	return (i0);
}

void	ft_recursive(unsigned int nbr, char *base, unsigned int size)
{
	if (nbr > size - 1)
	{
		ft_recursive(nbr_u / base_nbr, base);
		ft_putchar(base[nbr_u % base_nbr]);
	}

}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_nbr;
	unsigned int	nbr_u;

	base_nbr = base_converter(base);
	if (base_nbr == 0)
		return ;
	else if (base_nbr == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr_u = nbr * -1;
	}
	else
		nbr_u = nbr;
	if (nbr > 0)
	{
		ft_recursive(nbr_u / base_nbr, base);
	}
	else
		ft_putchar(base[nbr_u]);
}

int	main(void)
{

}
