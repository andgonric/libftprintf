/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:08:08 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/17 17:48:24 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h>

#define hexalo "0123456789abcdf";
#define	hexaup "0123456789ABCDF";

int	ft_printf(const char *, ...);
int	ft_typearg(const char tp, va_list args);

int	ft_printchar(char c);
int	ft_putstr(char *str);

int	ft_putnbr(int n);

int	ft_putperc(void);
#endif