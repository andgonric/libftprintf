/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:33:51 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/26 15:24:01 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char	*str;

	str = ft_itoa(n);
	if (n == -2147483648)
	{
		ft_printchar('-');
		ft_printchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_printchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_printchar(n + 48);
	}
	return (ft_strlen(str));
}
