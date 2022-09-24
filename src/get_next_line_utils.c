/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:10:44 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/20 20:18:00 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	ch;

	ch = (unsigned char)c;
	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return ((char *)(&str[i]));
		i++;
	}
	if (ch == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	count;

	if (!dst || !src)
		return (0);
	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}	
	return (count);
}

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*result;
	int		len_str1;
	int		len_str2;

	if (!str1 || !str2)
		return (NULL);
	len_str1 = 0;
	while (str1[len_str1] != '\0')
		len_str1++;
	len_str2 = 0;
	while (str2[len_str2] != '\0')
		len_str2++;
	result = (char *)malloc((len_str1 + len_str2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(&result[0], str1, len_str1 + 1);
	ft_strlcpy(&result[len_str1], str2, len_str2 + 1);
	return (result);
}

char	*ft_strdup(const char *str1)
{
	size_t	size;
	size_t	i;
	char	*ptr;

	if (!str1)
		return (NULL);
	size = 0;
	while (str1[size] != '\0')
		size++;
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = str1[i];
		i++;
	}
	ptr[size] = '\0';
	return (ptr);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	strlen;

	if (str == NULL)
		return (NULL);
	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	if (start > strlen)
		return (ft_strdup(""));
	if (strlen - start >= len)
		sub_str = (char *)malloc((len + 1) * sizeof(char));
	else
		sub_str = (char *)malloc((strlen - start + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	ft_strlcpy(sub_str, (str + start), (len + 1));
	return (sub_str);
}
