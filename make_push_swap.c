/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:49:01 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/14 23:26:58 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	data_malloc(t_data *data)
{
	data->b.stack = (int *)malloc(sizeof(int) * data->size);
	if (data->b.stack == NULL)
		return (0);
	data->master_set = (int *)malloc(sizeof(int) * data->size);
	if (data->master_set == NULL)
		return (0);
	return (1);
}

static void	data_free(t_data *data)
{
	if (data->b.stack)
		free(data->b.stack);
	if (data->master_set)
		free(data->master_set);
}

int	make_push_swap(int *a, t_data *data)
{
	data->a.stack = a;
	if (data_malloc(data) == 0)
		return (0);
	if (!is_sorted(data))
		go_sort(data);
	data_free(data);
	return (0);
}
