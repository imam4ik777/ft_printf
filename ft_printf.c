/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <imatakis@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:57:54 by imatakis          #+#    #+#             */
/*   Updated: 2024/03/11 21:07:06 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  converter(va_list args, const char c)
{
    int count;

    count = 0;
    if (c == 'c')
        count += print_char(va_arg(args, int));
    else if (c == 'u')
        count += print_unbr(va_arg(args, unsigned int));
    else if (c == 'd' || c == 'i')
        count += print_nbr(va_arg(args, int));
    else if (c == 's')
        count += print_str(va_arg(args, char *));
    else if (c == 'x' || c == 'X')
        count += print_hex(va_arg(args, unsigned int), c);
    else if (c == 'p')
        count += print_ptr(va_arg(args, uintptr_t));
    else if (c == '%')
        count += print_char(c);
    return (count);
}

int ft_printf(const char *s, ...)
{
    int i;
    int count;
    va_list args;

    if (!s)
		return (0);
    i = 0;
    count = 0;
    va_start(args, s);
    while (s[i])
    {
        if (s[i] == '%')
            count += converter(args, s[++i]);
        else
            count += print_char(s[i]);
        i++;
    }
    va_end(args);
    return (count);
    
}
