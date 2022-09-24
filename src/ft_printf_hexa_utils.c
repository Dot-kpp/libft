/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:39:34 by jpilotte          #+#    #+#             */
/*   Updated: 2022/05/17 19:40:34 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_print_hex(va_list arg, int *arg_len, char c)
{
	unsigned int	number;

	number = va_arg(arg, unsigned long);
	if (c == 'X')
		ft_putnbr_base_unsigned_int(number, "0123456789ABCDEF", arg_len);
	else
		ft_putnbr_base_unsigned_int(number, "0123456789abcdef", arg_len);
}

void	ft_print_hex_address(va_list arg, int *arg_len)
{
	unsigned long	address;

	address = va_arg(arg, unsigned long);
	if ((void *)address == NULL)
		ft_putstr("0x0", arg_len);
	else
	{
		ft_putstr("0x", arg_len);
		ft_putnbr_base_unsigned_long(address, "0123456789abcdef", arg_len);
	}
}
