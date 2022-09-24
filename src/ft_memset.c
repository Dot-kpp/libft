/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:31:41 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/13 21:41:08 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	while (n-- > 0)
		((unsigned char *)str)[n] = (unsigned char)c;
	return (str);
}
