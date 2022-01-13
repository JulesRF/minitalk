/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_server.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:11:18 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/13 15:38:22 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header_server/server_minitalk.h"

#include <stdio.h> //////////////////////////////

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

int	ft_binarytodecimal(char *bin)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (i <= 7)
	{
		res = res + ((bin[i] - 48) * ft_iterative_power(2, 7 - i));
		i++;
	}
	return (res);
}

void	ft_display(char *str)
{
	La tu fais un putnbr du res de ta fonction bynarytodecimal;
}

void	ft_single_char(int bit)
{
	static int	i = 7;
	static char	buffer[9];
	
	if (bit == 0)
	{
		buffer[i] = bit + 48;
		i--;
	}
	if (bit == 1)
	{
		buffer[i] = bit + 48;
		i--;
	}
	if (i < 0)
	{
		buffer[8] = '\0';
		ft_display(buffer);
	}
}

void	ft_catcher1(int sig)
{
	(void)sig;
	printf("Le signal SIGUS1 a bien ete recu\n");
	ft_single_char(0);
}

void	ft_catcher2(int sig)
{
	(void)sig;
	printf("Le signal SIGUS2 a bien ete recu\n");
	ft_single_char(1);
}

/*

int	main(void)
{
	int	pid;
	
	pid = getpid();
	printf("Le PID du server est : %d\n", pid);
	signal(SIGUSR1, ft_catcher1);
	signal(SIGUSR2, ft_catcher2);
	while (1)
		;
}

*/

int	main(void)
{
	int	res;
	char	chaine[8] = "01100101";
	
	res = ft_binarytodecimal(chaine);
	printf("res : %d\n", res);
}