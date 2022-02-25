/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 11:45:49 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/16 16:07:55 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack {
	int	*stack;
	int	curr_size;
}		t_stack;

typedef struct s_data {
	t_stack	a;
	t_stack	b;
	int		*master_set;
	int		max_bits;
	int		size;
}		t_data;

int		*get_nums(int argc, char **argv, t_data *data);
int		make_push_swap(int *a, t_data *data);
int		is_sorted(t_data *data);
int		is_int(char *str);
void	go_sort(t_data *data);
void	sort_big_stack(t_data *data);
void	sort_small_stack(t_data *data);
void	sa(t_data *data);
void	sb(t_data *data);
void	ra(t_data *data);
void	rra(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);

#endif