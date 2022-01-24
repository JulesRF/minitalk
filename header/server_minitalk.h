/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_minitalk.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroux-fo <jroux-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:56:27 by jroux-fo          #+#    #+#             */
/*   Updated: 2022/01/19 12:50:01 by jroux-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_MINITALK_H
# define SERVER_MINITALK_H
# include <unistd.h>
# include <signal.h>
# include "../ft_printf/ft_printf.h"

void	ft_simple_putchar(char c);
void	ft_single_char(char bit);
void	ft_catcher1(int sig);
void	ft_catcher2(int sig);

#endif