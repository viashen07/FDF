/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:58 by vgovende          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:12 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	n;

	len = 0;
	while (len < size && *dst != '\0' && *(dst++) != '\0')
		len++;
	n = size - len;
	if (!n)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (n != 1)
		{
			*(dst++) = *src;
			n--;
		}
		src++;
		len++;
	}
	*dst = '\0';
	return (len);
}
