/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:03:44 by astachni          #+#    #+#             */
/*   Updated: 2022/08/11 16:51:53 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	count_m(char c, int nb_neg)
{
	if (c == '-')
		nb_neg ++;
	if (c == '\t' || c == '\n' || c == '\v' || \
		c == '\t' || c == '\t' || c == ' ')
		return (0);
	return (nb_neg);
}

int	add_nb(char A, char B, int nb)
{
	if (B == '-' || B == '+')
		return (A - 48);
	else
		return ((nb * 10) + A - 48);
}

int	ft_atoi_base(char *str, char *base)
{
	int	var[4];

	var[0] = 0;
	var[1] = 0;
	while (str[var[0]])
	{
		var[1] = count_m(str[var[0]], var[1]);
		if (var [1] == 0)
			return (0);
		var[2] = var[0];
		while (str[var[2]] >= 48 && str[var[2] <= 57])
		{
			var[3] = add_nb(str[var[2]], str[var[2] - 1], var[3]);
			var[0] = var[2];
			if (!(str[var[2]] >= 48 && str[var[2]] <= 57))
				return (0);
		}
		var[0]++;
	}
	return (0);
}
