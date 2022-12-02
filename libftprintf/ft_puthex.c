/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:12:15 by andgonca          #+#    #+#             */
/*   Updated: 2022/12/02 08:24:11 by andgonca         ###   ########.fr       */
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

	pos = 0;
	if (num == 0)
		return (write(1, "0", 1));
	while (num > 16)
	{
		pot = ft_pot_point(num);
		res = num / pot;
		write(1, &size[res], 1);
		numero = res * pot;
		num -= numero;
	}
	write(1, &size[num], 1);
	pos += 2;
	return (pos);
}
