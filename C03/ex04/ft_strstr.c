/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:16:51 by astachni          #+#    #+#             */
/*   Updated: 2022/08/16 21:26:54 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i0;
	int	i1;
	int	i;

	i0 = 0;
	i1 = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i0] != '\0')
	{
		i = i0;
		i1 = 0;
		while (str[i0] == to_find[i1])
		{
			i0 ++;
			i1 ++;
			if (to_find[i1] == '\0')
				return (&str[i]);
		}
		i0 = i + 1;
	}
	return (0);
}	
