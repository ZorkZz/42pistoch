/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:14:43 by astachni          #+#    #+#             */
/*   Updated: 2022/08/16 20:25:51 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_compare(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] == b[i] && a[i] != '\0' && b[i] != '\0')
	{
		i++;
	}
	return (a[i] - b[i]);
}

void	ft_sort_table(char **tab, int size)
{
	int		a;
	int		b;
	char	*temp;

	b = 1;
	while (b < size - 1)
	{
		if (ft_compare(tab[b], tab[b + 1]) >= 0)
		{
			temp = tab[b];
			tab[b] = tab[b + 1];
			tab[b + 1] = temp;
			b = 1;
		}
		b++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		ft_sort_table(argv, argc);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
