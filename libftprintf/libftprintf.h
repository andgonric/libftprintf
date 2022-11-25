/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:08:08 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/25 22:59:03 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_printf(const char *, ...);

int	ft_printchar(int c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned int num, char size);
int	ft_putnbr(int n);
int	ft_putnbr_unsig(unsigned int nbr);

int	ft_putperc(void);

int	ft_strlen(const char *arg);
char	*ft_itoa(int n);
#endif