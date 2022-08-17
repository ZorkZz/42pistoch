/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:27:24 by astachni          #+#    #+#             */
/*   Updated: 2022/08/10 21:21:53 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = size;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (j);
}
