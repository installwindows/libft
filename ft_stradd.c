/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 17:59:27 by varnaud           #+#    #+#             */
/*   Updated: 2016/10/07 18:59:33 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_stradd(char *dest, char *src)
{
	int		size;
	char	*s;

	size = ft_strlen(dest) + ft_strlen(src) + 1;
	s = ft_strnew(size);
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, dest);
	ft_strcat(s, src);
	free(dest);
	return (s);
}
