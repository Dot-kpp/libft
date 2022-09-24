/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:36:47 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/04 20:35:36 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (*little == '\0' || little == NULL)
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < n)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)big + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
