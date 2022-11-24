/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 22:30:16 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/24 21:31:24 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_unsig(unsigned int nbr)
{
	char	*str;

	str = ft_itoa(nbr);
	if (nbr >= 10)
	{
		ft_putnbr_unsig(nbr / 10);
		ft_putnbr_unsig(nbr % 10);
	}
	else
	{
		ft_printchar(nbr + 48);
	}
	return (ft_strlen(str));
}
