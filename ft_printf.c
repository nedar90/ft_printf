/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:35:19 by nrajabia          #+#    #+#             */
/*   Updated: 2023/02/27 09:47:15 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list list, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(list, int));
	if (c == 's')
		count += ft_putstr(va_arg(list, char *));
	if (c == 'p')
		count += ft_hexadd((unsigned long)va_arg(list, void *));
	if (c == 'd')
		count += ft_putnbr(va_arg(list, int));
	if (c == 'i')
		count += ft_putnbr(va_arg(list, int));
	if (c == 'u')
		count += ft_putuns(va_arg(list, unsigned int));
	if (c == 'x')
		count += ft_hexnbr(va_arg(list, unsigned int), 'x');
	if (c == 'X')
		count += ft_hexnbr(va_arg(list, unsigned int), 'X');
	if (c == '%')
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		count;

	count = 0;
	va_start(list, str);
	while (*str)
	{
		if (*str == '%')
			count += ft_format(list, *++str);
		else
		{
			count++;
			ft_putchar(*str);
		}
		str++;
	}
	va_end(list);
	return (count);
}
