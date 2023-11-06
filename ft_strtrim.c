/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilmende <lilmende@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:16:28 by lilmende          #+#    #+#             */
/*   Updated: 2023/11/06 10:55:09 by lilmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = 0;
	while (s1[len] && ft_is_in_set(s1[len], set))
		len++;
	end = ft_strlen(s1);
	while (end > len && ft_is_in_set(s1[end - 1], set))
		end--;
	result = (char *)malloc(end - len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1 + len, end - len + 1);
	return (result);
}
