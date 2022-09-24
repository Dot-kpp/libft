/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:34:53 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/04 20:30:12 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	offset;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	offset = dest_len;
	if (size <= 0)
		return (ft_strlen((char *)src));
	if (dest_len > size)
		return (size + ft_strlen((char *)src));
	while (src[i] && offset < size - 1)
		dest[offset++] = src[i++];
	dest[offset] = '\0';
	while (src[i])
		i++;
	return (dest_len + i);
}
