/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:33:22 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/25 20:46:49 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_sort(va_list args, char c)
{
	int count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(args, int));
	if (c == '%')
		count = write(1, "%", 1);
	if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	if (c == 'u')
		count = ft_put_unsinbr(va_arg(args, unsigned int));
	return (count);
}
