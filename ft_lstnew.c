/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lilmende <lilmende@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:25:29 by lilmende          #+#    #+#             */
/*   Updated: 2023/11/06 12:53:19 by lilmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(*lstnew));
	if (!lstnew)
		return (NULL);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}
