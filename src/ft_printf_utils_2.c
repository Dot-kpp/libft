/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:41:58 by jpilotte          #+#    #+#             */
/*   Updated: 2022/05/17 19:42:46 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_putchar(char c, int *len)
{
	*len += write (1, &c, 1);
}

void	ft_putnbr(int n, int *len)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar('-', len);
		num = -n;
	}
	else
		num = n;
	if (num > 9)
	{
		ft_putnbr(num / 10, len);
		num %= 10;
	}	
	ft_putchar(num + '0', len);
}

void	ft_putnbr_u(unsigned int n, int *base_len)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, base_len);
		n %= 10;
	}
	ft_putchar(n + '0', base_len);
}

void	ft_putstr(char *s, int *base_len)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], base_len);
		i++;
	}
}