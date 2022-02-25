/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:07:51 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/14 21:17:13 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_master_set(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size)
	{
		data->master_set[i] = data->a.stack[i];
		i++;
	}
}

static void	bubble_sort(t_data *data)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	fill_master_set(data);
	while (i < data->size)
	{
		j = i;
		while (j < data->size)
		{
			if (data->master_set[i] > data->master_set[j])
			{
				tmp = data->master_set[i];
				data->master_set[i] = data->master_set[j];
				data->master_set[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

static void	get_indices(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->size)
	{
		j = 0;
		while (j < data->size)
		{
			if (data->a.stack[i] == data->master_set[j])
			{
				data->a.stack[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	data->a.curr_size = data->size;
	data->b.curr_size = 0;
}

void	go_sort(t_data *data)
{
	bubble_sort(data);
	get_indices(data);
	while (!is_sorted(data))
	{
		if (data->size < 6)
			sort_small_stack(data);
		else
			sort_big_stack(data);
	}
}
