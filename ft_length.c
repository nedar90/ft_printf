/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:21:59 by nrajabia          #+#    #+#             */
/*   Updated: 2023/02/27 09:45:56 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	if(!s)
		return(count);
	while (s[count] != '\0')
		count++;
	return (count);
}

size_t	ft_nbrlen(unsigned long num, unsigned int base)
{
	size_t	count;

	count = 1;
	while (num >= base)
	{
		count++;
		num /= base;
	}
	return (count);
}
