/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:20:19 by nrajabia          #+#    #+#             */
/*   Updated: 2023/02/27 09:46:19 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexnbr(unsigned int n, char format)
{
	ft_printnum(n, format, 16);
	return (ft_nbrlen(n, 16));
}

int	ft_hexadd(unsigned long num)
{
	if (!num)
	{
		ft_putstr("(nil)");
		return (5);
	}
	ft_putstr("0x");
	ft_printnum(num, 'p', 16);
	return (ft_nbrlen(num, 16) + 2);
}
