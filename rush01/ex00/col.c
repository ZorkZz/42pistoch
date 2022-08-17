/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:22:09 by astachni          #+#    #+#             */
/*   Updated: 2022/08/14 12:49:42 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	condition_i_0(int **tab_box, int i, int k)
{
	int	temp;

	temp = 1;
	if (i == 0)
	{
		while (k < 4)
		{
			tab_box[k][0] = temp;
			temp++;
			k++;
		}
	}
}

void	condition_i_1(int **tab_box, int i, int k)
{
	int	temp;

	temp = 1;
	if (i == 1)
	{
		while (k < 4)
		{
			tab_box[k][1] = temp;
			temp++;
			k++;
		}
	}
}

void	condition_i_2(int **tab_box, int i, int k)
{
	int	temp;

	temp = 1;
	if (i == 2)
	{
		while (k < 4)
		{
			tab_box[k][2] = temp;
			temp++;
			k++;
		}
	}
}

void	condition_i_3(int **tab_box, int i, int k)
{
	int	temp;

	temp = 1;
	if (i == 3)
	{
		while (k < 4)
		{
			tab_box[k][3] = temp;
			temp++;
			k++;
		}
	}
}

void	col_change(int **tab_col_row, int **tab_box)
{
	int	var[4];

	var[0] = 0;
	var[1] = 0;
	var[2] = 0;
	while (var[1] < 2)
	{
		if (tab_col_row[var[1]][var[0]] == 4)
		{
			var[2] = 0;
			condition_i_0(tab_box, var[0], var[2]);
			condition_i_1(tab_box, var[0], var[2]);
			condition_i_2(tab_box, var[0], var[2]);
			condition_i_3(tab_box, var[0], var[2]);
		}
	}
}
