/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:12:15 by andgonca          #+#    #+#             */
/*   Updated: 2022/12/01 19:11:51 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pot_point(unsigned long num)
{
	unsigned long	pot;	

	pot = 1;
	while (pot < num)
	{
		if ((pot * 16) < num)
			pot *= 16;
		else
			break ;
	}
	return (pot);
}

int	ft_puthex(unsigned int num, char *size)
{
	unsigned long		pot;
	unsigned long		res;
	unsigned long		numero;
	int					pos;
	char				convert[17];

	pos = 0;
	while (num > 16)
	{
		pot = ft_pot_point(num);
		res = num / pot;
		convert[pos++] = size[res];
		numero = res * pot;
		num -= numero;
	}
	convert[pos] = size[num];
	pos += 2;
	ft_putstr(convert);
	return (pos);
}
