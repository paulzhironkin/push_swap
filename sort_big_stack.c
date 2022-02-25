/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:34:45 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/14 23:17:21 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bites(t_data *data)
{
	int	max_num;
	int	max_bits;

	max_num = data->size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static void	shift_check(t_data *data, int i)
{
	int	j;
	int	times_needed;

	j = 0;
	times_needed = data->size;
	while (j < times_needed)
	{
		if (((data->a.stack[j] >> i) & 1) == 1)
		{
			ra(data);
			j--;
			times_needed--;
		}
		else
		{
			pb(data);
			j--;
			times_needed--;
		}
		j++;
	}
	j = 0;
	while (j < data->b.curr_size)
		pa(data);
}

void	sort_big_stack(t_data *data)
{
	int	i;

	i = 0;
	data->a.curr_size = data->size;
	data->b.curr_size = 0;
	data->max_bits = get_max_bites(data);
	while (i < data->max_bits)
	{
		shift_check(data, i);
		i++;
	}
}
