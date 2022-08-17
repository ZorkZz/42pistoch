/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:33:37 by astachni          #+#    #+#             */
/*   Updated: 2022/08/07 22:00:51 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	normal_a(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	while (a < x - 2)
	{
		ft_putchar('-');
		a++;
	}
	ft_putchar('o');
	ft_putchar('\n');
	a = 0;
	while (a < y - 2)
	{
		ft_putchar('|');
		b = 0;
		while (b < x - 2)
		{
			ft_putchar(' ');
			b++;
		}
		a++;
		ft_putchar('|');
		ft_putchar('\n');
	}
}

void	cond_1(int x)
{
	int	a;

	ft_putchar('o');
	a = 0;
	while (a < x - 2)
	{
		ft_putchar('-');
		a++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	cond_2(int y)
{
	int	a;

	ft_putchar('o');
	ft_putchar('\n');
	a = 0;
	while (a < y - 2)
	{
		ft_putchar('-');
		ft_putchar('\n');
		a++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	normal_write(int x, int y)
{
	int	a;

	ft_putchar('o');
	normal_a(x, y);
	ft_putchar('o');
	a = 0;
	while (a < x - 2)
	{
		ft_putchar('-');
		a++;
	}
	ft_putchar('o');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x >= 2 && y >= 2)
	{
		normal_write(x, y);
	}
	else if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else if (x >= 2 && y == 1)
	{
		cond_1(x);
	}
	else if (x == 1 && y >= 2)
	{
		cond_2(y);
	}
}
