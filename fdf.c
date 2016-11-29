/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgovende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/05 18:27:50 by vgovende          #+#    #+#             */
/*   Updated: 2016/06/05 18:28:08 by vgovende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	initialise_mlx(void **mlx, void **win)
{
	*mlx = mlx_init();
	initialise_win(*mlx, win);
}

void	initialise_win(void *mlx, void **win)
{
	*win = mlx_new_window(mlx, WIN_X, WIN_Y, "FDF");
}
