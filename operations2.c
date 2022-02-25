/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:10:35 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/14 19:44:16 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *data)
{
	int	tmp;
	int	ops_needed;

	ops_needed = data->a.curr_size - 1;
	tmp = data->a.stack[data->a.curr_size - 1];
	while (ops_needed)
	{
		data->a.stack[ops_needed] = data->a.stack[ops_needed - 1];
		ops_needed--;
	}
	data->a.stack[0] = tmp;
	write(1, "rra\n", 4);
}

void	pb(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	tmp = data->a.stack[0];
	i = 0;
	while (i < data->a.curr_size - 1)
	{
		data->a.stack[i] = data->a.stack[i + 1];
		i++;
	}
	j = data->b.curr_size;
	while (j)
	{
		data->b.stack[j] = data->b.stack[j - 1];
		j--;
	}
	data->b.stack[0] = tmp;
	data->a.curr_size--;
	data->b.curr_size++;
	write(1, "pb\n", 3);
}

void	pa(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	tmp = data->b.stack[0];
	i = 0;
	while (i < data->b.curr_size - 1)
	{
		data->b.stack[i] = data->b.stack[i + 1];
		i++;
	}
	j = data->a.curr_size;
	while (j)
	{
		data->a.stack[j] = data->a.stack[j - 1];
		j--;
	}
	data->a.stack[0] = tmp;
	data->a.curr_size++;
	data->b.curr_size--;
	write(1, "pa\n", 3);
}
