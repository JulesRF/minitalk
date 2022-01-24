/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:33:06 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/20 14:49:56 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client_minitalk.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	moins;

	res = 0;
	i = 0;
	moins = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			moins = 1;
		i++;
	}
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		res = res * 10 + nptr[i] - 48;
		i++;
	}
	if (moins == 1)
		return (-res);
	return (res);
}

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

int	ft_error(int argc, char *prepid)
{
	int	checkpid;

	if (argc != 3)
	{
		ft_printf("Erreur : Veuillez entrer 2 arguments\n");
		return (1);
	}
	checkpid = ft_check_pid(prepid);
	if (checkpid == 0)
	{
		ft_printf("Erreur : Veuillez entrer un PID correct\n");
		return (1);
	}
	return (0);
}
