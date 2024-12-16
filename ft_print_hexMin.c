/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexMin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adammour <adammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:51 by adammour          #+#    #+#             */
/*   Updated: 2024/12/16 19:27:45 by adammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexMin(long nb)
{
	char *hexa;
	int i;
	hexa = "0123456789abcdef";
	i = 0;

	if (nb >= 16)
		ft_print_hexMin(nb / 16);
	i++;
	ft_print_char(hexa[nb % 16]);
	return (i);
}