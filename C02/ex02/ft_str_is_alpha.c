/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:00:37 by astachni          #+#    #+#             */
/*   Updated: 2022/08/09 21:36:10 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	is = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 'z' || str[i] < 'a') && (str[i] > 'Z' || str[i] < 'A'))
		{
			is = 0;
		}
		i++;
	}
	return (is);
}
