/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adammour <adammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:51 by adammour          #+#    #+#             */
/*   Updated: 2024/12/16 19:28:04 by adammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list args)
{
	int	size;

	size = 0;
	if (c == '%')
		ft_print_char('%');
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
    return (size);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			len = len + ft_check(format[i], args);
		}
		else
		{
			ft_print_char(format[i]);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

//#include <stdio.h>

// int	main(void)
// {
//     char *test = "bonjour";
    
//     printf("verif : %s", test);
//     ft_printf ("verif : %s", test);

//     return (0);
// }