/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:37:10 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/12 22:35:08 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*new_str;

	new_str = (char *)str + ft_strlen(str);
	while (*new_str != c)
	{
		if (new_str == str)
			return (0);
		new_str--;
	}
	return (new_str);
}
