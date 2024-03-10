/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:01:45 by imatakis          #+#    #+#             */
/*   Updated: 2024/03/06 19:31:14 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += print_unbr(n / 10);
	count += print_char(n % 10 + '0');
	return (count);
}
