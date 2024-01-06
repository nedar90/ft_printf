/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 10:45:10 by nrajabia          #+#    #+#             */
/*   Updated: 2023/02/21 17:33:52 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int num)
{
	ft_printnum(num, 'u', 10);
	return (ft_nbrlen(num, 10));
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (ft_strlen("-2147483648"));
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			count++;
			n *= -1;
		}
		ft_printnum((unsigned int)n, 'd', 10);
	}
	count += ft_nbrlen(n, 10);
	return (count);
}
