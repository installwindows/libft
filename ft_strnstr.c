/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varnaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 14:43:44 by varnaud           #+#    #+#             */
/*   Updated: 2016/09/28 15:52:06 by varnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*p;
	const char	*l;

	l = little;
	p = NULL;
	if (*l == '\0')
		return ((char*)big);
	while (len--)
	{
		if (*l == *big)
			l++;
		else
		{
			big -= (l - little);
			len += (l - little);
			l = little;
		}
		big++;
		if (*l == '\0')
			return ((char*)(big - (l - little)));
		if (*big == '\0')
			break ;
	}
	return (NULL);
}
