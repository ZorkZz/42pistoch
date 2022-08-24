/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:21:44 by ezanotti          #+#    #+#             */
/*   Updated: 2022/08/21 10:07:12 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

typedef struct s_number
{
	char	*number;
	char	*word;
}	t_number;

int		ft_atoi(char *str);
void	ft_display_error(int error);
void	ft_putstr(char *str);
void	ft_putchar(char c);
char	*ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_open_dict(char *dict);
int		ft_count_lines(char *dict);

#endif
