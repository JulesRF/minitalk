/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_server.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:20:24 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/10 13:47:15 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/minitalk.h"
#include <stdio.h>

int main(void)
{
	int	pid;
	
	pid = getpid();
	while (1)
	{
		printf("Le PID du server est : %d\n", pid);
		sleep(2);
	}
}