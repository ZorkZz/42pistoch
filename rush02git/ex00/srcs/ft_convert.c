/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:24:54 by tgiraudo          #+#    #+#             */
/*   Updated: 2022/08/21 09:47:12 by tgiraudo         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"
#include<stdlib.h>

void print(t_number *value, char *nbr)
{
	int i;
	char temp;

	i = 0;
	while(value[i].number)
	{
		i++;
		if(nbr[0] > '0')
		{
			while (ft_strcmp(&nbr[0], value[i].number))
				i++;
			ft_putstr(value[i].word);
			ft_putstr("hundred");
			i = 0;
		}
		if(nbr[1] == 1)
		{
			while(ft_strcmp(value[i].number, nbr + 1))
				i++;
			ft_putstr(value[i].word);
		}
		else if (nbr[1]== '0')
			i = 0;
		else
		{
			temp = nbr[2];
			nbr[2] = '0';
			while(ft_strcmp(value[i].number, nbr + 1))
				i++;
			ft_putstr(value[i].word);
			nbr[2] = temp;
		}
		if(nbr[2] == '0')
			i = 0;
		else
		{
			while(ft_strcmp(value[i].number, nbr + 2))
				i++;
			ft_putstr(value[i].word);
		}
	}
}

void print_factor(t_number *value, char *factor)
{
	int i;

	i = 0;
	while(value[i].number != factor)
	{
		i++;
	}
	ft_putstr(value[i].word);
}

void convert(t_number *value,char *nbr)
{
	int len;
	char *temp;
	char *factor = NULL;
	int i;

	i = 0;
	len = ft_strlen(nbr);
	temp = nbr + len - 3;
	print(value, temp);
	factor[0] = 1;
	len /= 3;
	while(len - i)
	{
		factor[i + 1] = 0;
		factor[i + 2] = 0;
		factor[i + 3] = 0;
		i++;
	}
	if(nbr[len - 4] != 0 && len > 1)
	{
		print_factor(value, factor);
		convert(value, temp);
	}
}


