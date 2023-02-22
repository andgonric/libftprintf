/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:21:22 by andgonca          #+#    #+#             */
/*   Updated: 2023/01/11 20:24:07 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cont(long int n)
{
	long int	c;

	c = 0;
	if (n == 0)
		c++;
	if (n < 0)
	{
		n *= -1;
		c++;
	}
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	len;
	long int	num;

	num = n;
	len = ft_cont(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		str[0] = 48;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		str[len] = (num % 10) + 48;
		num /= 10;
		len--;
	}
	return (str);
}
