/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:22:46 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/10 13:57:24 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minitalk.h"

#include <stdio.h>   //////////////////

int	ft_check_pid(char *pid)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	if (ft_strlen(pid) != 4)
		return (0);
	return (res);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_printf("aie");
		return (1)
	}
}