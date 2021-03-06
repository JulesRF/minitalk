/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_server.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:11:18 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/20 15:12:21 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server_minitalk.h"

void	ft_catcher1(int sig)
{
	(void)sig;
	ft_single_char(0);
}

void	ft_catcher2(int sig)
{
	(void)sig;
	ft_single_char(1);
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("Le PID du server est : %d\n", pid);
	signal(SIGUSR1, ft_catcher1);
	signal(SIGUSR2, ft_catcher2);
	while (1)
		pause();
	return (0);
}
