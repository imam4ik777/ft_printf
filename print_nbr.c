/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:01:51 by imatakis          #+#    #+#             */
/*   Updated: 2024/03/06 21:48:40 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n)
{
	int count;

	count = 0;
	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		count += write(1, "-", 1);
		count += print_nbr(n  * -1);
	}
	else
	{
		if (n > 9)
			count += print_nbr(n / 10);
		count += print_char(n % 10 + '0');
	}
	return (count);
}
