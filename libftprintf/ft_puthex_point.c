/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_point.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:16:02 by andgonca          #+#    #+#             */
/*   Updated: 2022/12/01 13:16:02 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_len(uintptr_t num)
{
	int	leng;

	leng = 0;
	while (num != 0)
	{
		num /= 16;
		leng++;
	}
	return (leng);
}

void	ft_put_point(uintptr_t num)
{
	int	n;

	if (num >= 16)
	{
		ft_put_point(num / 16);
		ft_put_point(num % 16);
	}
	else
	{
		if (num <= 9)
		{
			n = (int)num + '0';
			ft_printchar(n);
		}
		else
		{
			n = (int)num - 10 + 'a';
			ft_printchar(n);
		}
	}
}

int	ft_puthex_point(unsigned long num)
{
	int	leng;

	leng = 0;
	leng += write(1, "0x", 2);
	if (num == 0)
		leng += write(1, "0", 1);
	else
	{
		ft_put_point(num);
		leng += ft_count_len(num);
	}
	return (leng);
}
