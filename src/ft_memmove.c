/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:31:27 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/12 22:26:24 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	char		*tmp_dst;
	const char	*tmp_src;
	size_t		i;

	if ((str1 == str2) || n == 0)
		return (str1);
	tmp_dst = (char *)str1;
	tmp_src = (const char *)str2;
	i = -1;
	if (tmp_dst < tmp_src)
	{
		while (++i < n)
			tmp_dst[i] = tmp_src[i];
	}
	else
	{
		while (n-- > 0)
			tmp_dst[n] = tmp_src[n];
	}
	return (str1);
}
