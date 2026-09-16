/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 15:25:13 by betdemir          #+#    #+#             */
/*   Updated: 2026/09/16 21:52:57 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int  ft_handle_format (char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (c == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (c == 'p')
		count += ft_print_ptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count += ft_print_nbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_print_unsig(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		count += ft_print_percent();
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_handle_format(format[i],args);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
