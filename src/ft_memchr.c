/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:30:30 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/12 22:40:58 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*tmp_str;
	unsigned char	tmp_char;
	size_t			i;

	tmp_str = (unsigned char *)str;
	tmp_char = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (tmp_str[i] == tmp_char)
			return (tmp_str + i);
		i++;
	}
	return (0);
}
