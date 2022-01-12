/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_server.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:11:18 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/12 15:08:19 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_server/server_minitalk.h"

void	ft_catcher1(int sig)
{
	(void)sig;
	ft_printf("Le signal SIGUS1 a bien ete recu\n");
}

void	ft_catcher2(int sig)
{
	(void)sig;
	ft_printf("Le signal SIGUS2 a bien ete recu\n");
}

int	main(void)
{
	int	pid;
	
	pid = getpid();
	ft_printf("Le PID du server est : %d\n", pid);
	signal(SIGUSR1, ft_catcher1);
	signal(SIGUSR2, ft_catcher2);
	while (1)
		;
}