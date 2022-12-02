/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:30:16 by andgonca          #+#    #+#             */
/*   Updated: 2022/12/01 23:05:23 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_unsig_itoa(unsigned int nbr)
{
	char	*num;
	int		len;

	len = ft_len(nbr);
	num = malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (nbr != 0)
	{
		num[len - 1] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	return (num);
}

int	ft_putnbr_unsig(unsigned int nbr)
{
	int		leng;
	char	*num;

	leng = 0;
	if (nbr == 0)
		leng += write(1, "0", 1);
	else
	{
		num = ft_unsig_itoa(nbr);
		leng += ft_putstr(num);
		free(num);
	}
	return (leng);
}
