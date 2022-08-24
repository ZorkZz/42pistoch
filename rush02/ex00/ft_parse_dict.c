/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:50:38 by astachni          #+#    #+#             */
/*   Updated: 2022/08/20 20:28:50 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

unsigned int	*ft_read_number(FILE	*dict);
char	**ft_read_char(FILE	*dict);
int	open_dict(void)
{
	FILE				*dict;
	unsigned int		*number_dict;
	char	**char_dict;

	dict = NULL;
	dict = fopen("numbers.dict.txt", "r");
	if (dict != NULL)
	{
		number_dict = ft_read_number(dict);
		char_dict = ft_read_char(dict);
	}
	else
	{
		return (0);
	}
	return (1);
}

unsigned int	*ft_read_number(FILE	*dict)
{
	unsigned	int	*str;
	int				i;
	int				actual_char;

	i = 0;
	str = malloc(sizeof(int *) * 45);
	if (str == NULL)
		return (NULL);
	actual_char = 0;
	while (actual_char != EOF)
	{
		actual_char = fgetc(dict);
		if (actual_char >= '0' && actual_char <= '9')
		{
			str[i] = str[i] * 10 + (actual_char - 48);
		}
		if(actual_char == ':')
		{
			i++;
		}
	}
	return (str);
}

char	**ft_read_char(FILE	*dict)
{
	char	**str;
	int		i;
	int		j;
	char	actual_char;
	char	buffer[30];

	i = 0;
	j = 0;
	str = malloc(sizeof(char *) * 41);
	if (str == NULL)
		return (NULL);
	actual_char = 0;
	while (actual_char != EOF)
	{
		actual_char = fgetc(dict);
		while (actual_char >= 'a' && actual_char <= 'z' && actual_char != '\n')
		{
			buffer[j] = actual_char;
			j++;
			actual_char = fgetc(dict);
		}
		if (j > 0)
		{
			buffer[j] = '\0';
			str[i] = malloc(sizeof(char) * j + 1);
			str[i] = ft_strcpy(str[i], buffer);
			j = 0;
		}
	}
	return (str);
}

int	main(void)
{
	open_dict();
}
