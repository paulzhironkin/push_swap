/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:06:43 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/14 15:15:56 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (data->a.stack[i] < data->a.stack[i + 1]
		&& (i + 1) < data->size)
		i++;
	if (i + 1 == data->size)
		return (1);
	return (0);
}
