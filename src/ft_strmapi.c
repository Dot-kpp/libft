/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:36:10 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/12 22:08:06 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	if (s)
	{
		new_str = ft_strdup((const char *)s);
		if (new_str == NULL)
			return (NULL);
		i = 0;
		while (new_str[i] != 0)
		{
			new_str[i] = f((unsigned int)i, new_str[i]);
			i++;
		}
		return (new_str);
	}
	else
		return (NULL);
}
