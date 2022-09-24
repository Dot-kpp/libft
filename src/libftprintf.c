/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 14:40:55 by jpilotte          #+#    #+#             */
/*   Updated: 2022/05/17 19:49:28 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	get_format(char const *str, va_list arg, int index, int *arg_len)
{
	char	c;

	if (str[index] == 'c')
	{
		c = va_arg(arg, int);
		*arg_len += write(1, &c, 1);
	}
	if (str[index] == '%')
		*arg_len += write (1, "%", 1);
	if (str[index] == 'd' || str[index] == 'i')
		ft_print_int(arg, arg_len);
	if (str[index] == 'u')
		ft_print_usigned_int(arg, arg_len);
	if (str[index] == 'p')
		ft_print_hex_address(arg, arg_len);
	if (str[index] == 's')
		ft_print_str(arg, arg_len);
	if (str[index] == 'x' || str[index] == 'X')
		ft_print_hex(arg, arg_len, str[index]);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		*arg_len;

	va_start(args, format);
	i = 0;
	count = 0;
	arg_len = &count;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			get_format(format, args, i, arg_len);
		}
		else
			count = count + write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
