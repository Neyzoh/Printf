/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adammour <adammour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:06:43 by adammour          #+#    #+#             */
/*   Updated: 2024/12/16 19:31:49 by adammour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);

int	ft_print_base10(long nb);

int	ft_print_char(char c);

int	ft_print_hexMaj(long nb);

int	ft_print_hexMin(long nb);

int	ft_print_pointer(unsigned long long int nb);

int	ft_print_str(char *str);

#endif
