/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:09:35 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/14 19:37:10 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)
{
	int	tmp;

	tmp = data->a.stack[0];
	data->a.stack[0] = data->a.stack[1];
	data->a.stack[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_data *data)
{
	int	tmp;

	tmp = data->b.stack[0];
	data->b.stack[0] = data->b.stack[1];
	data->b.stack[1] = tmp;
	write(1, "sb\n", 3);
}

void	ra(t_data *data)
{
	int	tmp;
	int	i;

	tmp = data->a.stack[0];
	i = 0;
	while (i < data->a.curr_size - 1)
	{
		data->a.stack[i] = data->a.stack[i + 1];
		i++;
	}
	data->a.stack[data->a.curr_size - 1] = tmp;
	write(1, "ra\n", 3);
}
