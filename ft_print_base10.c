/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_base10.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adammour <adammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:51 by adammour          #+#    #+#             */
/*   Updated: 2024/12/12 18:31:30 by adammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_print_base10(long nb)
{
    int i;

    i = 0;
    if (nb < 0)
    {
        ft_print_char('-');
        nb *= -1;
        i++;
    }
    if (nb > 9)
    {
        ft_print_base10(nb / 10);
        ft_print_base10(nb % 10);
    }
        i++;
        ft_print_char(nb + '0');
    return (i);
}