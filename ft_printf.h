/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: betdemir@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 14:45:46 by betdemir          #+#    #+#             */
/*   Updated: 2026/09/16 21:52:20 by betdemir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int n);
int	ft_print_hex(unsigned int n, char format);
int	ft_print_nbr(int n);
int	ft_print_percent(void);
int	ft_print_ptr(void *n);
int	ft_print_str(char *n);
int	ft_print_unsig(unsigned int n);
int	ft_print_ptr(void *n);

#endif