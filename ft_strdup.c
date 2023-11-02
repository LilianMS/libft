/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilmende <lilmende@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:16:57 by lilmende          #+#    #+#             */
/*   Updated: 2023/11/02 13:25:39 by lilmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = malloc(ft_strlen (s) + 1);
	if (dst == 0)
		return (0);
	ft_strlcpy(dst, s, ft_strlen (s) + 1);
	return (dst);
}
