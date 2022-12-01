/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:16:18 by andgonca          #+#    #+#             */
/*   Updated: 2022/12/01 20:49:20 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_typearg(const char tp, va_list args)
{
	int	ret;

	if (tp == 'c')
		ret = ft_printchar(va_arg(args, int));
	if (tp == 's')
		ret = ft_putstr(va_arg(args, char *));
	if (tp == 'p')
		ret = ft_puthex_point(va_arg(args, unsigned long));
	if (tp == 'd')
		ret = ft_putnbr(va_arg(args, int));
	if (tp == 'i')
		ret = ft_putnbr(va_arg(args, int));
	if (tp == 'u')
		ret = ft_putnbr_unsig(va_arg(args, unsigned int));
	if (tp == 'x')
		ret = ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	if (tp == 'X')
		ret = ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (tp == '%')
		ret = ft_putperc();
	return (ret);
}

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
		{
				leng += ft_typearg(str[p + 1], args);
				p++;
		}
		else
			leng += ft_printchar(str[p]);
		p++;
	}
	va_end(args);
	return (leng);
}

/*int main()
{
	int x = 50;
   int *ptr = &x;
   int	count;
   count = ft_printf("The address is: %p, the value is %d\n", ptr, *ptr);
	printf ("%d\n", count);
   //printf("The address is: %p, the value is %d", ptr, *ptr);
}*/
