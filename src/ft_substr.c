/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:37:47 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/12 21:58:07 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub_str;

	sub_str = (char *)malloc(sizeof(*s) * (len + 1));
	if (sub_str == NULL || s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub_str[j] = s[i];
			j++;
		}
		i++;
	}
	sub_str[j] = '\0';
	return (sub_str);
}
