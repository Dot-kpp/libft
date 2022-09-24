/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:31:10 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/12 22:18:11 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp;

	if ((dest == src) || n == 0)
		return (dest);
	tmp = (char *)dest;
	i = 0;
	while (i < n)
	{
		*(char *)tmp = *(char *)src;
		tmp++;
		src++;
		i++;
	}
	return (dest);
}
