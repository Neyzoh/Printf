/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adammour <adammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:51 by adammour          #+#    #+#             */
/*   Updated: 2024/12/12 20:28:42 by adammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int ft_(char c, va_list args)
{
    int size; 

    size = 0;
    if (c == '%')
        write(1, '%', 1);
    else if (c == 'c')
        size = ft_print_char(va_arg(args, int));
    else if (c == 's')
        size = ft_print_str(va_arg(args, char *));
    else if ('p')
        size = ft_print_pointer(va_arg(args, unsigned long long int));
    else if ('d')
        size = ft_print_base10(va_arg(args, long));
    else if ('i')
        size = ft_print_base10(va_arg(args, long));
    else if ('u')
        size = ft_print_base10(va_arg(args, long));
    else if ('x')
        size = ft_print_hexMin(va_arg(args, long));
    else if ('X')
        size = ft_print_hexMaj(va_arg(args, long));
}

int ft_printf(const char *, ...)
{
    
}