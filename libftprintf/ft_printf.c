/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:16:18 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/21 21:48:27 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	int		p;
	int		leng;
	va_list	args;

	p = 0;
	leng = 0;
	va_start(args, str);
	while (str[p])
	{
		if (str[p] == '%')
			leng += ft_typearg(str[p + 1], args);
		else
			leng += ft_printchar(str[p]);
		p++;
	}
	va_end(args);
	return (leng);
}
