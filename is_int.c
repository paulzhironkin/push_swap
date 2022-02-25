/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:07:27 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/16 16:08:55 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_int(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 || str[i] == '-')
			i++;
		else if (ft_isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
