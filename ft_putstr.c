/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 10:30:25 by nrajabia          #+#    #+#             */
/*   Updated: 2023/02/27 09:48:04 by nrajabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int		len;
	char	*str;
	int		num;

	num = -1;
	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (0);
	while (s[++num] != '\0')
	{
		str[num] = s[num];
		ft_putchar(str[num]);
	}
	free(str);
	return (len);
}
