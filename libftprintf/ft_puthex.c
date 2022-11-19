/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:17:17 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/19 18:05:46 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	pot(unsigned int num)
{
	unsigned int	pot;
	unsigned int	

	pot = 1;
	while (pot < num)
	{
		if ((pot * 16) < num)
			pot *= 16;
		else
			break;
	}
	return (pot);
}

int	ft_puthex(unsigned int num)
{
	
}