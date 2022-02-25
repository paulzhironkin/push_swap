/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: latahbah <latahbah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:38:33 by latahbah          #+#    #+#             */
/*   Updated: 2022/02/14 21:05:19 by latahbah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi(const char *nptr)
{
	long	res;
	long	pol;

	res = 0;
	pol = 1;
	while (*nptr == '\f' || *nptr == '\n' || *nptr == '\r'
		|| *nptr == '\t' || *nptr == '\v' || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			pol *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + (long)(*nptr - '0');
		nptr++;
	}
	res *= pol;
	if (res >= -2147483648 && res <= 2147483647)
		return (res);
	return (2147483648);
}
