/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:08:08 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/24 22:58:26 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *, ...);
int	ft_typearg(const char tp, va_list args);

int	ft_printchar(int c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned int num, char size);
int	ft_putnbr(int n);
int	ft_putnbr_unsig(unsigned int nbr);

int	ft_putperc(void);
#endif