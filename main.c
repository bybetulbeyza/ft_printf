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
#include <stdio.h> // Orijinal printf'i kullanabilmek için

int main(void)
{
    int sayac;
    int o_sayac;
    char *test_metni = "Merhaba 42!";
    
    sayac = ft_printf("Benimki: Harf %c, Metin %s, Yüzde %%, Adres %p\n", 'A', test_metni, test_metni);
    
    o_sayac = printf("Orijinal: Harf %c, Metin %s, Yüzde %%, Adres %p\n", 'A', test_metni, test_metni);
    
    printf("\nBenim dondurdugum: %d\n", sayac);
    printf("Orijinalin dondurdugu: %d\n", o_sayac);
    
    return (0);
}