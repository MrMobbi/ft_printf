/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:38:45 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/25 19:27:25 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int	ft_count_conv(const char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			count++;
			str += 2;
		}
		else
			str++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	int		count_args;
	va_list	args;
	size_t	i;
	
	i = 0;
	va_start(args, str);
	count_args = ft_count_conv(str);
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_sort(args, str[i + 1]);
			i += 2;
		}
		else
			count += ft_putchar(str[i++]);
	}
	va_end(args);
	return (count);	
}

int main(void)
{
	int test = -2147483648;
	char str[50] = "salut";
	printf("{%d}\n", ft_printf("test 1)[%d]2)[%%]3)[%s]4)[%c]5)[%i]6)[%u]7)[%x]8)[%X]9)[%p]", test, str));
	return (0);
}
