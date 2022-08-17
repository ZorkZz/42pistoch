/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 23:31:41 by astachni          #+#    #+#             */
/*   Updated: 2022/08/15 17:44:01 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	_swap(int *a, int *b)
{
	int	d;

	d = *a;
	*a = *b;
	*b = d;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a < size)
	{
		while (b < size)
		{
			if (tab[b] > tab[b + 1])
			{
				_swap(&tab[b], &tab[b + 1]);
				b = 0;
			}
			else if (tab[b] <= tab[b + 1])
			{
				b++;
			}
		}
		a++;
	}
}
