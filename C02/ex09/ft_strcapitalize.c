/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astachni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 16:54:02 by astachni          #+#    #+#             */
/*   Updated: 2022/08/15 18:35:21 by astachni         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
char	is_maj_to_min(char letter_A, char letter_B)
{
	if (letter_B >= 'A' && letter_B <= 'Z')
	{
		if (letter_A >= 'A' && letter_A <= 'Z')
		{
			return (letter_A + 32);
		}
	}
	if (letter_B >= 'a' && letter_B <= 'z')
	{
		if (letter_A >= 'A' && letter_A <= 'Z')
		{
			return (letter_A + 32);
		}
	}
	if (letter_B >= '0' && letter_B <= '9')
	{
		if (letter_A >= 'A' && letter_A <= 'Z')
		{
			return (letter_A + 32);
		}
	}
	return (letter_A);
}

char	is_min_to_maj(char letter_A, char letter_B)
{
	if (!(letter_B >= 'A' && letter_B <= 'Z'))
	{
		if (!(letter_B >= 'a' && letter_B <= 'z'))
		{
			if (!(letter_B >= '0' && letter_B <= '9'))
			{
				if (letter_A >= 'a' && letter_A <= 'z')
				{
					return (letter_A - 32);
				}
			}
		}
	}
	return (letter_A);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	letter_a;
	char	letter_b;

	i = 0;
	while (str[i] != '\0')
	{
		if (i > 0)
		{
			letter_a = str[i];
			letter_b = str[i - 1];
			str[i] = is_min_to_maj(letter_a, letter_b);
			letter_a = str[i];
			letter_b = str[i - 1];
			str[i] = is_maj_to_min(letter_a, letter_b);
		}
		if (i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
