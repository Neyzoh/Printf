/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamammour <adamammour@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:51 by adammour          #+#    #+#             */
/*   Updated: 2024/12/10 10:14:54 by adamammour       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_print_base10(int nb)
{
    long    n;
    int i;

    nb = n;
    i = 0;
    if (n < 0)
    {
        ft_print_char('-');
        n *= -1;
        i++;
    }
    if (n > 9)
    {
        ft_print_base10(n / 10);
        ft_print_base10(n % 10);
    }
    else
    {
        ft_print_char(n + '0');
        i++;
    }
    return (i);
}