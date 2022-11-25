/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typearg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:50:10 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/25 23:18:04 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_typearg(const char tp, va_list args)
{
	int	ret;

	if (tp == 'c')
		ret = ft_printchar(va_arg(args, int));
	if (tp == 's')
		ret = ft_putstr(va_arg(args, char *));
	if (tp == 'p')
		ret = ft_puthex(va_arg(args, unsigned long), "u");
	if (tp == 'd')
		ret = ft_putnbr(va_arg(args, int));
	if (tp == 'i')
		ret = ft_putnbr(va_arg(args, int));
	if (tp == 'u')
		ret = ft_putnbr_unsig(va_arg(args, unsigned int));
	if (tp == 'x')
		ret = ft_puthex(va_arg(args, unsigned int), 'l');
	if (tp == 'X')
		ret = ft_puthex(va_arg(args, unsigned int), 'u');
	if (tp == '%')
		ret = ft_putperc();
	return (ret);
}
