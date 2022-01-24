/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:36:27 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/13 14:36:27 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server_minitalk.h"

void	ft_simple_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_single_char(char bit)
{
	static int				i = 7;
	static unsigned char	c = 0;

	if (i >= 0)
	{
		if (bit == 1)
			c = c | (1 << i);
		i--;
	}
	if (i < 0)
	{
		i = 7;
		ft_simple_putchar(c);
		c = 0;
	}
}
