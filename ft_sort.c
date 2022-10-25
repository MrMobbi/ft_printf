/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:33:22 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/25 19:09:33 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_sort(va_list args, char c)
{
	int count;

	count = 0;
	if (c == 'd')
		count = ft_putnbr(va_arg(args, int));
	if (c == '%')
		count = write(1, "%", 1);
	if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	return (count);
}
