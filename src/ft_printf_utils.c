/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:41:02 by jpilotte          #+#    #+#             */
/*   Updated: 2022/05/17 19:41:53 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_print_char(va_list arg, int *arg_len)
{
	char	c;

	c = va_arg(arg, int);
	*arg_len += write(1, &c, 1);
}

void	ft_print_str(va_list arg, int *arg_len)
{
	char	*str;

	str = va_arg(arg, void *);
	if (str == NULL)
		ft_putstr("(null)", arg_len);
	else
		ft_putstr(str, arg_len);
}

void	ft_print_int(va_list arg, int *arg_len)
{
	int	number;

	number = va_arg(arg, int);
	ft_putnbr(number, arg_len);
}

void	ft_print_usigned_int(va_list arg, int *arg_len)
{
	unsigned int	number;

	number = va_arg(arg, unsigned int);
	ft_putnbr_u(number, arg_len);
}
