/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 16:57:54 by betdemir          #+#    #+#             */
/*   Updated: 2026/09/16 22:24:33 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_hex(unsigned long n, char format)
{
	int	count;
	char *base;
	
	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_ptr_hex(n / 16, format);
	count += write (1, &base[n % 16], 1);
	return (count);
}

int	ft_print_hex(unsigned int n, char format)
{
	int	count;

	if (!n)
	{
		write(1, "0", 1);
		return (1);
	}
	count = 0;
	count += ft_ptr_hex(n, format);
	return (count);
}