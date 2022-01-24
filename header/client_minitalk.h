/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_minitalk.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:54:59 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/19 12:49:48 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_MINITALK_H
# define CLIENT_MINITALK_H
# include <unistd.h>
# include <signal.h>
# include "../ft_printf/ft_printf.h"

void	ft_sendchar(unsigned char c, int pid);
void	ft_sender(unsigned char *str, int pid);
int		ft_atoi(const char *nptr);
int		ft_check_pid(char *pid);
int		ft_error(int argc, char *prepid);

#endif