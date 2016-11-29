/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lists.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 18:27:50 by vgovende          #+#    #+#             */
/*   Updated: 2016/06/05 18:27:55 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	addnode(t_list **s, char **name)
{
	if (*s == NULL)
	{
		*s = (t_list *)malloc(sizeof(t_list));
		(*s)->content = name;
		(*s)->next = NULL;
	}
	else
		addnode(&((*s)->next), name);
}
