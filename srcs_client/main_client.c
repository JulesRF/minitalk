/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:22:46 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/20 14:49:23 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client_minitalk.h"

void	ft_sendchar(unsigned char c, int pid)
{
	int				i;
	unsigned char	tmp;

	i = 0;
	tmp = 0;
	while (i <= 7)
	{
		tmp = c << i;
		tmp = tmp >> 7;
		if ((0 | tmp) == 0)
			kill(pid, SIGUSR1);
		else if ((0 | tmp) == 1)
			kill(pid, SIGUSR2);
		i++;
		usleep(150);
	}
}

void	ft_sender(unsigned char *str, int pid)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_sendchar(str[i], pid);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (ft_error(argc, argv[1]))
		return (1);
	pid = ft_atoi(argv[1]);
	ft_sender((unsigned char *)argv[2], pid);
	return (0);
}
