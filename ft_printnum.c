/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:46:18 by nrajabia          #+#    #+#             */
/*   Updated: 2023/02/25 12:46:47 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_printnum(unsigned long n, char format, unsigned int base)
{
	if (n > base -1)
	{
		ft_printnum(n / base, format, base);
		n = n % base;
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
	}
	if (base == 16 && n >= 10 && n < 16)
	{
		if (format == 'X')
			ft_putchar(n + 55);
		else
			ft_putchar(n + 87);
	}
}
