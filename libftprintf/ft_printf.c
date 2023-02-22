/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 21:16:18 by andgonca          #+#    #+#             */
/*   Updated: 2023/01/11 20:25:16 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_typearg(const char tp, va_list args)
{
	int	ret;

	if (tp == 'c')
		ret = ft_printchar(va_arg(args, int));
	if (tp == 's')
		ret = ft_putstr(va_arg(args, char *));
	if (tp == 'p')
		ret = ft_puthex_point(va_arg(args, size_t));
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
	int count;
	//int	count2;

   count = ft_printf("%p\n", 0);
	//printf ("%d\n", count);
   //count2 = printf("%p\n", 0);
   //	printf ("%d\n", count2);
}*/