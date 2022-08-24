/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:18:06 by ezanotti          #+#    #+#             */
/*   Updated: 2022/08/21 11:08:21 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>

#include <stdio.h>
	
char	*ft_get_dict(int argc, char **argv)
{
	char	*dict;

	if (argc == 2)
	{
		dict = malloc(sizeof(char) * 13);
		dict = "numbers.dict\0";
	}
	else if (argc == 3)
	{
		dict = malloc(sizeof(char) * ft_strlen(argv[1]) + 1);
		dict = argv[1];	
	}
	else
	{
		ft_display_error(0);
		return (0);
	}
	return (dict);
}

int	ft_fill_struct(t_number *tab, char *str)
{
	char buffer[10000];
	int i;
	int index_tab;

	i = 0;
	index_tab = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9' && *str != ':')
			{
				buffer[i] = *str;
				str++;
				i++;	
			}
			buffer[i] = '\0';
			tab[index_tab].number = malloc(sizeof(char) * (i + 1)); 
			ft_strcpy(tab[index_tab].number, buffer);
			i = 0;
			while (*str >= 32 && *str <= 126 && *str != '\n')
			{
				buffer[i] = *str; 
				str++;
				i++;
			}
			buffer[i] = '\0';
			tab[index_tab].word = malloc(sizeof(char) * (i + 1));
			ft_strcpy(tab[index_tab].word, buffer);
			i = 0;
			index_tab++;
		}
		str++;
	}

	tab[index_tab].number = 0;

	return (0);
}

int		main(int argc, char **argv)
{
	char		*dict;
	char		*nbr_converted;
	char		*str;
	t_number 	*tab;
	int			count_lines;

	dict = ft_get_dict(argc, argv);
	str = ft_open_dict(dict);
	count_lines = 0;
	count_lines = ft_count_lines(dict); 
	tab = malloc(sizeof(t_number) * count_lines + 1);

	ft_fill_struct(tab, str);
	nbr_converted = argv[1];
	int i = 0;

	while (tab[i].number)
	{
		printf("nbr = %s, word = %s\n", tab[i].number, tab[i].word);
		i++;
	
	}

	



	//printf("%s\n\n", str);
	printf("dict = %s, int = %s\n", dict, nbr_converted);
}




