/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezanotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:46:40 by ezanotti          #+#    #+#             */
/*   Updated: 2022/08/20 15:50:06 by ezanotti         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void	ft_display_error(int error)
{
	if (error == 0)
		write(1, "Error\n", 6);
	else if (error == 1)
		write(1, "Dict Error\n", 11);
}
