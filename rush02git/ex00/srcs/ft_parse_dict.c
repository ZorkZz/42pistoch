/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 21:29:48 by ezanotti          #+#    #+#             */
/*   Updated: 2022/08/21 10:25:24 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int ft_count_char(char *dict)
{
	int		fd;
	int		bytes;
	char	c;
	int		count;

	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (-1);
	count = 0;
	while ((bytes = read(fd, &c, sizeof(c))) > 0)
		count++;
	close(fd);
	return (count);
}

int	ft_count_lines(char *dict)
{
	int		fd;
	int		bytes;
	char	c;
	int		count;
	
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (-1);
	count = 0;
	while ((bytes = read(fd, &c, sizeof(c))) > 0)
	{
		if (c == '\n')
			count++;
	}
	close(fd);
	return (count);
}

char	*ft_open_dict(char *dict)
{
	int		fd;
	int		count_char;
	int 	i;
	char	*str;

	count_char = ft_count_char(dict);
	if (count_char == -1)
		return (0);
	i = 0;
	fd = open(dict, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * count_char);
	read(fd, str, count_char);
	close(fd);
	return (str);
}
