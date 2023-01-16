/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:45:07 by latahbah          #+#    #+#             */
/*   Updated: 2023/01/16 18:51:08 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	is_dublicated(int *nums, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->size)
	{
		j = i + 1;
		while (j < data->size)
		{
			if (nums[i] == nums[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		*nums;
	t_data	data;

	if (argc < 2)
		return (0);
	nums = get_nums(argc, argv, &data);
	if (is_dublicated(nums, &data))
	{
		write(1, "Error1\n", 7);
		free(nums);
		return (0);
	}
	else
		make_push_swap(nums, &data);
	free(nums);
	return (0);
}
