/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilmende <lilmende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:44:41 by lilmende          #+#    #+#             */
/*   Updated: 2023/11/08 18:32:30 by lilmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_read_nb(const char *nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		res = res * 10 + (nb[i] - '0');
		i++;
	}
	return (res);
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	if (nptr[i] >= '0' && nptr[i] <= '9')
		return (ft_read_nb(&nptr[i]) * sign);
	return (0);
}
