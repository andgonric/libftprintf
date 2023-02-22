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

int	ft_count_len(size_t num)
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

void	ft_put_point(size_t num)
{
	size_t	n;

	if (num >= 16)
	{
		ft_put_point(num / 16);
		ft_put_point(num % 16);
	}
	else
	{
		if (num <= 9)
		{
			n = num + '0';
			ft_printchar(n);
		}
		else
		{
			n = num - 10 + 'a';
			ft_printchar(n);
		}
	}
}

int	ft_puthex_point(size_t num)
{
	int	leng;

	leng = 0;
	if (!num)
	{
		return (write(1, "(nil)", 5));
	}
	leng += write(1, "0x", 2);
	ft_put_point(num);
	leng += ft_count_len(num);
	return (leng);
}
