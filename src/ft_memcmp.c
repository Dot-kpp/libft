/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:30:47 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/12 22:43:14 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*tmp_str1;
	unsigned char	*tmp_str2;

	i = 0;
	tmp_str1 = (unsigned char *)str1;
	tmp_str2 = (unsigned char *)str2;
	while (i < n)
	{
		if (tmp_str1[i] == tmp_str2[i])
			i++;
		else
			return (tmp_str1[i] - tmp_str2[i]);
	}
	return (0);
}
