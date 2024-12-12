/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexMin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamammour <adamammour@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:51 by adammour          #+#    #+#             */
/*   Updated: 2024/12/10 10:24:36 by adamammour       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_print_hexMin(int nb)
{
    long n;
    char *hexa;
    int i;
    n = nb;
    hexa = "0123456789abcdef";
    i = 0;
    if (n >= 16)
        ft_print_hexMin(n / 16);
    i++;
    ft_print_char(hexa[n % 16]);
    return (i);
}