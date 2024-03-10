/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <@student.42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:01:47 by imatakis          #+#    #+#             */
/*   Updated: 2024/03/08 21:16:27 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(const char *str)
{
	int count;

	count = 0;
	if (!str)
		return (print_char(str[count]));
	while (str[count])
	{
		print_char(str[count]);
		count++;
	}
	return (count);
}
