/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <varnaud@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/24 14:47:16 by varnaud           #+#    #+#             */
/*   Updated: 2016/10/24 15:03:32 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstget(t_list *lst, void *value, int (*cmp)(void *, void *))
{
	t_list	*current;

	current = lst;
	while (current)
	{
		if (cmp(current->content, value))
			return (current);
		current = current->next;
	}
	return (NULL);
}
