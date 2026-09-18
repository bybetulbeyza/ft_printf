/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 17:01:48 by betdemir          #+#    #+#             */
/*   Updated: 2026/09/16 20:50:16 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int		count;
	long	nb;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		count++;
		ft_print_char('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		count += ft_print_nbr(nb / 10);
	}
	count += ft_print_char(nb % 10 + '0');
	return (count);
}
