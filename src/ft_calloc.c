/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:24:06 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/12 22:49:56 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*i;

	i = malloc(size * count);
	if (i == NULL)
		return (NULL);
	ft_memset(i, 0, count * size);
	return (i);
}
