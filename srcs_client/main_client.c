/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:22:46 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/13 13:37:39 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_client/client_minitalk.h"

#include <stdio.h> ////////////////////////////////////

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

int ft_error(int argc, char *prepid)
{
	int	checkpid;
	
	if (argc != 3)
	{
		printf("Erreur : Veuillez entrer 2 arguments\n");
		return (1);
	}
	checkpid = ft_check_pid(prepid);
	if (checkpid == 0)
	{
		printf("Erreur : Veuillez entrer un PID correct\n");
		return (1);
	}
	return (0);
}

int	ft_pid(int to_do, int tmp)
{
	static int	pid;
	
	if (to_do == 1)
		pid = tmp;
	if (to_do == 0)
		return (pid);
	return (0);
}

int	main(int argc, char **argv)
{
	int	pid;
	
	if (ft_error(argc, argv[1]))
		return (0);
	pid = ft_atoi(argv[1]);
	ft_pid(1, pid);
}