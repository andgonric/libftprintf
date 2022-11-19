/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typearg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:50:10 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/19 17:21:18 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_typearg(const char tp, va_list args)
{
	int	ret;

	if (tp == 'c')
		ret = ft_printchar(va_arg(args, char));
	if (tp == 's')
		ret = ft_putstr(va_arg(args, unsigned int));
	if (tp == 'p')
		ret = ft_printhex(va_arg(args, void *));
	if (tp == 'd')
		ret = ft_putnbr_dec(va_arg(args, float));
	if (tp == 'i')
		ret = ft_putnbr(va_arg(args, int));
	if (tp == 'u')
		ret = ft_putnbr_unsigdec(va_arg(args, unsigned int));
	if (tp == 'x')
		ret = ft_puthex_loc(va_arg(args, unsigned int));
	if (tp == 'X')
		ret = ft_puthex_upc(va_arg(args, unsigned int));
	if (tp == '%')
		ret = ft_putperc();
	return (ret);
}
