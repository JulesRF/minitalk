/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:22:46 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/10 16:26:41 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_client/client_minitalk.h"

int	ft_check_pid(char *pid)
{
	int	i;

	i = 0;
	while (pid[i])
	{
		if (pid[i] <= '9' && pid[i] >= '0')
			i++;
		else
			return (0);
	}
	return (ft_atoi(pid));
}

//void	ft_test(int sig, int pid)
//{
//	if (signum == SIGUSR1)
//		kill(pid, SIGUSR1);
//	else
//		kill(pid, SIGUSR2);
//}

int	main(int argc, char **argv)
{
	int	pid;
	
	if (argc != 3)
	{
		ft_printf("Erreur : Veuillez entrer 2 arguments\n");
		return (1);
	}
	pid = ft_check_pid(argv[1]);
	if (pid == 0)
	{
		ft_printf("Erreur : Veuillez entrer un PID correct\n");
		return (1);
	}
	kill(pid, SIGUSR1);	
	kill(pid, SIGUSR2);
}