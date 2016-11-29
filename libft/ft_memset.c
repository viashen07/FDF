/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:52:58 by vgovende          #+#    #+#             */
/*   Updated: 2016/11/13 16:53:11 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*character;

	if (len == 0)
	{
		return (b);
	}
	character = (unsigned char *)b;
	while (len--)
	{
		*character = (unsigned char)c;
		if (len)
			character++;
	}
	return (b);
}
