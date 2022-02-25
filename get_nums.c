/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nums.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:42:38 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/25 19:25:11 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_args_count(char **args, t_data *data)
{
	int	count;

	count = 0;
	while (args[count])
		count++;
	data->size = count;
	return (count);
}

static int	*fill_nums(char **args, int arg_count)
{
	int		*nums;
	long	tmp;
	int		i;

	i = 0;
	nums = (int *)malloc(sizeof(int) * (arg_count));
	if (nums == NULL)
		return (NULL);
	while (i < arg_count)
	{
		tmp = INT_MAX + (long) 1;
		if (is_int(args[i]))
			tmp = ft_atoi(args[i]);
		if (tmp <= INT_MAX)
			nums[i] = tmp;
		else
		{
			free(nums);
			return (NULL);
		}
		i++;
	}
	return (nums);
}

static int	*parse_str(char **argv, t_data *data)
{
	int		*nums;
	char	**args;
	int		arg_count;
	int		i;

	i = 0;
	args = ft_split(argv[1], ' ');
	if (args == NULL)
		return (NULL);
	arg_count = get_args_count(args, data);
	nums = fill_nums(args, arg_count);
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	return (nums);
}

static int	*parse_args(int argc, char **argv, t_data *data)
{
	int		*nums;
	long	tmp;
	int		i;

	i = 0;
	data->size = argc - 1;
	nums = (int *)malloc(sizeof(int) * (argc));
	if (nums == NULL)
		return (NULL);
	while (i < argc - 1)
	{
		tmp = INT_MAX + (long) 1;
		if (is_int(argv[i + 1]))
			tmp = ft_atoi(argv[i + 1]);
		if (tmp <= INT_MAX)
			nums[i] = (int) tmp;
		else
		{
			free(nums);
			return (NULL);
		}
		i++;
	}
	return (nums);
}

int	*get_nums(int argc, char **argv, t_data *data)
{
	int	*nums;

	if (argc == 2)
		nums = parse_str(argv, data);
	else
		nums = parse_args(argc, argv, data);
	if (nums == NULL)
	{
		write(1, "Error", 5);
		exit(EXIT_FAILURE);
	}
	return (nums);
}
