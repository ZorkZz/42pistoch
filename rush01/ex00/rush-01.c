/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 10:48:28 by astachni          #+#    #+#             */
/*   Updated: 2022/08/14 12:49:35 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
void	col_change(int **tab_col_row, int **tab_box);
void	print_table(int	**tab_box);

void	take_table(void)
{
	int	tab_box[4][4] = 
	{
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};
	int	tab_col_row[4][4] = 
	{
		{4, 3, 2, 1},
		{1, 2, 2, 2},
		{4, 3, 2, 1},
		{1, 2, 2, 2}
	};
	col_change(tab_col_row, tab_box);
	print_table(tab_box);
}

int	main(void)
{
	take_table();
}
