/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:17:17 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/24 23:03:28 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_pot(unsigned int num)
{
	unsigned int	pot;	

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

void	ft_putstr_lower(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] >= 65 && str[c] <= 90)
			str[c] += 32;
		c++;
	}
	ft_putstr(str);
}

int	ft_puthex(unsigned int num, char size)
{
	unsigned int		pot;
	unsigned int		res;
	unsigned int		numero;
	int					pos;
	char				convert[17];
	char				*hexachar;

	hexachar = "0123456789ABCDEF";
	pos = 0;
	/*if (num < 0)
	{
		ft_putchar("-");
		num *= -1;
		pos++;
	}*/
	while (num > 16)
	{
		pot = ft_pot(num);
		res = num / pot;
		convert[pos++] = hexachar[res];
		numero = res * pot;
		num -= numero;
	}
	convert[pos] = hexachar[num];
	if (size == 'l')
		ft_putstr_lower(convert);
	return (pos);
}
