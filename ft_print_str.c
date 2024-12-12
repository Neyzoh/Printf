/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamammour <adamammour@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:35:51 by adammour          #+#    #+#             */
/*   Updated: 2024/12/09 19:00:48 by adamammour       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print_str(char *str)
{
    int i;

    i = 0;
    if (!str)
    {
        write(1,"(null)", 6);
        return (NULL);
    }
    while (str[i])
    {
        write(1, str[i], 1);
        i++;
    }
    return(i);
}