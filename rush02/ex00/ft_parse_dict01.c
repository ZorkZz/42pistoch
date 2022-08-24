/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_dict01.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:10:11 by astachni          #+#    #+#             */
/*   Updated: 2022/08/21 10:11:07 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
unsigned int	*ft_read_number(int	open_dict);
int	open_dict(void)
{
	int	open_dict;

	open_dict = open("numbers.dict.txt", O_RDONLY);
	if (open_dict < 0)
		return (1);
	else
	{
		ft_read_number(open_dict);
	}
	return(0);
}

unsigned int	*ft_read_number(int	open_dict)
{
	unsigned	int	*str;
	int				i;
	int				j;
	char			actual_char;

	i = 0;
	j = 1;
	str = malloc(sizeof(int *) * 45);
	if (str == NULL)
		return (NULL);
	while (read(open_dict, &actual_char, 0))
	{
		printf("%c", actual_char);
	}
	return (0);
}

int	main (void)
{
	open_dict();
}
