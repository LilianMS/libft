/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilmende <lilmende@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:52:43 by lilmende          #+#    #+#             */
/*   Updated: 2023/10/26 18:22:29 by lilmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*tdest;
	const char	*tsrc;
	size_t		i;

	tdest = (char *)dest;
	tsrc = (const char *)src;
	i = 0;
	while (i < n)
	{
		tdest[i] = tsrc[i];
		i++;
	}
	return (dest);
}
