/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:08:08 by andgonca          #+#    #+#             */
/*   Updated: 2022/12/01 19:04:01 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);

int		ft_printchar(int c);
int		ft_putstr(char *str);
int		ft_puthex_point(unsigned long num);
int		ft_putnbr(int n);
int		ft_putnbr_unsig(unsigned int nbr);

int		ft_puthex(unsigned int num, char *size);
int		ft_putperc(void);

int		ft_strlen(const char *arg);
char	*ft_itoa(int n);
#endif
