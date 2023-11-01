/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilmende <lilmende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:00:04 by lilmende          #+#    #+#             */
/*   Updated: 2023/10/26 18:21:18 by lilmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ts;
	size_t			i;

	i = 0;
	ts = s;
	while (i < n)
	{
		ts[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
