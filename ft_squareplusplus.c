/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_squareplusplus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/13 18:51:13 by varnaud           #+#    #+#             */
/*   Updated: 2016/10/14 20:20:30 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_squareplusplus(char ***src, int c, int old, int len)
{
	char	**a;
	int		i;

	a = (char**)malloc(sizeof(char*) * (1 + len));
	a[len] = NULL;
	i = len;
	while (i-- > old)
	{
		a[i] = ft_strnew(len);
		ft_memset(a[i], c, len);
	}
	if (src == NULL)
		return (a);
	while (i >= 0)
	{
		a[i] = (char*)malloc(sizeof(char) * (1 + len));
		ft_memcpy(a[i], (*src)[i], old);
		a[i][len - 1] = c;
		free((*src)[i]);
		i--;
	}
	*src = a;
	free(**src);
	return (a);
}
