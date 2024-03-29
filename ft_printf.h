/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatakis <imatakis@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:56:52 by imatakis          #+#    #+#             */
/*   Updated: 2024/03/11 21:09:54 by imatakis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	print_char(int c);
int	print_unbr(unsigned int n);
int	print_nbr(int n);
int	print_str(const char *str);
int	print_hex(unsigned int n, char c);
int	print_ptr(uintptr_t n);

#endif