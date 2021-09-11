/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hsv_to_rgb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvitor-s <gvitor-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:22:19 by gvitor-s          #+#    #+#             */
/*   Updated: 2021/09/11 14:39:33 by gvitor-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_conv
{
	double	c;
	double	x;
	double	m;
	int		h_;
}	t_conv;

void	ft_hsv_to_rgb(double h, double v, double s, t_rgb *rgb)
{
	t_conv	conv;

	conv.c = v * s;
	conv.h_ = h / 60;
	conv.x = conv.c * (1 - (ft_abs(conv.h_ % 2) - 1));
	if (0 <= conv.h_ && 1 >= conv.h_)
		*rgb = (t_rgb){.r = conv.c, .g = conv.x, .b = 0};
	else if (1 < conv.h_ && 2 >= conv.h_)
		*rgb = (t_rgb){.r = conv.x, .g = conv.c, .b = 0};
	else if (2 < conv.h_ && 3 >= conv.h_)
		*rgb = (t_rgb){.r = 0, .g = conv.c, .b = conv.x};
	else if (3 < conv.h_ && 4 >= conv.h_)
		*rgb = (t_rgb){.r = 0, .g = conv.x, .b = conv.c};
	else if (4 < conv.h_ && 5 >= conv.h_)
		*rgb = (t_rgb){.r = conv.x, .g = 0, .b = conv.c};
	else if (5 < conv.h_ && 6 >= conv.h_)
		*rgb = (t_rgb){.r = conv.c, .g = 0, .b = conv.x};
	conv.m = v - conv.c;
	rgb->r = (int)((rgb->r + conv.m) * 255);
	rgb->g = (int)((rgb->g + conv.m) * 255);
	rgb->b = (int)((rgb->b + conv.m) * 255);
}
