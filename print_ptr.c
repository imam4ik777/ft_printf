/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <imatakis@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:01:49 by imatakis          #+#    #+#             */
/*   Updated: 2024/03/11 17:44:04 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_pointer(uintptr_t n, char *s)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += put_pointer(n / 16, s);
	count += print_char(s[n % 16]);
	return (count);
}

int	print_ptr(uintptr_t n)
{
	int	count;

	count = 0;
	print_str("0x");
	return (put_pointer(n, "0123456789abcdef") + 2);
}
