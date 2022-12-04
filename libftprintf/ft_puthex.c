/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:12:15 by andgonca          #+#    #+#             */
/*   Updated: 2022/12/04 18:47:28 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_leng(unsigned long num)
{
	unsigned long	leng;	

	leng = 0;
	while (num != 0)
	{
		num /= 16;
		leng++;
	}
	return (leng);
}

int	ft_puthex(unsigned int num, char *size)
{
	if (num == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	else
	{
		if (num >= 16)
		{
			ft_puthex(num / 16, size);
			ft_puthex(num % 16, size);
		}
		else
			ft_printchar(size[num]);
	}
	return (ft_leng(num));
}
