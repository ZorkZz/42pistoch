/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 10:39:19 by astachni          #+#    #+#             */
/*   Updated: 2022/08/07 10:10:13 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y)
{
	int a;
	int b;

	if (x >= 2 && y >= 2)
	{
		write(1, "A", 1);
		a = 0;
		while (a < x-2)
		{
			write(1, "B", 1);
			a++;
		}
		write(1, "C\n", 2);
		a = 0;
		while(a < y-2)
		{
			write(1, "B", 1);
			b = 0;
			while (b < x-2)
			{
				write(1, " ", 1);
				b++;
			}
			a++;
			write(1, "B\n", 2);
		}
		write(1, "C", 1);
		a = 0;
		while (a < x-2)
		{
			write(1, "B", 1);
			a++;
		}
		write(1, "A\n", 2);
	}
	else if (x == 1 && y == 1)
	{
		write(1, "A\n", 2);
	}
	else if (x >= 2 && y == 1)
	{
		write(1, "A", 1);
		a = 0;
		while (a < x-2)
		{
			write(1, "B", 1);
			a++;
		}
		write(1, "C", 1);
		write(1, "\n", 1);
	}
	else if(x == 1 && y >= 2)
	{
		write(1, "A\n", 2);
		a = 0;
		while(a < y-2)
		{
			write(1, "B", 1);
			write(1, "\n", 1);
			a++;
		}
		write(1, "C\n", 2);

	}
}

int main()
{
	rush(1, 50);
}
