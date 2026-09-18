/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 21:53:12 by betdemir          #+#    #+#             */
/*   Updated: 2026/09/16 22:19:27 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h> // Sınır değerleri (INT_MIN vb.) için gerekli

int	main(void)
{
	ft_printf("%d\n", -41);
	printf("%d", -41);
	return (0);
}
