/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:58 by vgovende          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:11 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		character;
	size_t		i;
	char		*s1;
	const char	*s2;

	i = 0;
	character = (unsigned char)c;
	s1 = (char*)dst;
	s2 = (char*)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == character)
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
