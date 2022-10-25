/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjulliat <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:36:53 by mjulliat          #+#    #+#             */
/*   Updated: 2022/10/25 19:04:52 by mjulliat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_calloc(size_t size, size_t nbyte);

int		ft_putchar(char c);
int		ft_sort(va_list args, char c);
int		ft_putnbr(int n);
int		ft_putstr(char *str);

#endif
