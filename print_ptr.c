/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:01:49 by imatakis          #+#    #+#             */
/*   Updated: 2024/03/10 02:39:58 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_pointer(unsigned int n, char *s)
{
	int 	count;

	count = 0;
	if (n > 15)
		count += put_pointer(n / 16, s);
	count += print_char(s[n % 16]);
	return (count);
}

int	print_ptr(unsigned int n)
{
	int count;

	print_str("0x");
	count = put_pointer(n, "0123456789abcdef");
	return (count + 2);
}
