/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:03:44 by astachni          #+#    #+#             */
/*   Updated: 2022/08/22 23:41:48 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str, char base_len)
{
	int	neg;
	int	nb;
	int	i;

	neg = 1;
	nb = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || \
			str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * base_len + str[i] - 48 - 1;
		i++;
	}
	return (nb * neg);
}

unsigned int	base_conv(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == '+' || base[j] == '-' || (base [i] >= 9 && \
				base[i] <= 13) || base [i] == ' ')
				return (0);
			if (base[i] == base [j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	atoi_result;
	int	len_base;

	len_base = base_conv(base);
	atoi_result = ft_atoi(str, len_base);
	return (atoi_result);
}
