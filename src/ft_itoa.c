/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:26:40 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/16 13:18:41 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		neg;

	neg = 0;
	i = get_len(n);
	s = ft_calloc(get_len(n) + 1, sizeof(char));
	if (n == -2147483648)
		return (ft_memcpy(s, "-2147483648", 11));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	s[i] = '\0';
	while (--i >= 0)
	{
		s[i] = n % 10 + 48;
		n = n / 10;
		if (i == 0 && neg == 1)
			s[i] = '-';
	}
	return (s);
}
