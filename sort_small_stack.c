/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:10:26 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/14 23:05:32 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_three_nums(t_data *data, int min, int med)
{
	if (data->a.stack[0] == min)
	{
		rra(data);
		sa(data);
	}
	else if (data->a.stack[0] == med)
	{
		if (data->a.stack[1] == min)
			sa(data);
		else
			rra(data);
	}
	else
	{
		if (data->a.stack[1] == min)
			ra(data);
		else
		{
			sa(data);
			rra(data);
		}
	}
}

static void	sort_four_nums(t_data *data)
{
	int	i;
	int	ops_needed;

	i = 0;
	ops_needed = 4;
	while (ops_needed)
	{
		if (data->a.stack[0] != 0)
			ra(data);
		else
			pb(data);
		ops_needed--;
	}
	sort_three_nums(data, 1, 2);
	pa(data);
}

static void	sort_five_nums(t_data *data)
{
	int	i;
	int	ops_needed;

	i = 0;
	ops_needed = 5;
	while (ops_needed)
	{
		if (data->a.stack[0] != 0 && data->a.stack[0] != 1)
			ra(data);
		else
			pb(data);
		ops_needed--;
	}
	if (data->b.stack[0] < data->b.stack[1])
		sb(data);
	sort_three_nums(data, 2, 3);
	pa(data);
	pa(data);
}

void	sort_small_stack(t_data *data)
{
	int	size;

	size = data->size;
	if (size == 2)
		sa(data);
	else if (size == 3)
		sort_three_nums(data, 0, 1);
	else if (size == 4)
		sort_four_nums(data);
	else
		sort_five_nums(data);
}
