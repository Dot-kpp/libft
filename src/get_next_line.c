/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:10:09 by jpilotte          #+#    #+#             */
/*   Updated: 2022/04/20 20:05:26 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char **passed_stuff, char **line)
{
	size_t	i;
	char	*new_buf;

	i = 0;
	new_buf = NULL;
	while ((*(*passed_stuff + i) != '\n') && (*(*passed_stuff + i) != '\0'))
		i++;
	if (*(*passed_stuff + i) == '\n')
	{
		i++;
		*line = ft_substr(*passed_stuff, 0, i);
		new_buf = ft_strdup(*passed_stuff + i);
	}
	else
		*line = ft_strdup(*passed_stuff);
	free(*passed_stuff);
	*passed_stuff = NULL;
	return (new_buf);
}

ssize_t	read_file(int fd, char **buf, char **passed_stuff, char **line)
{
	char	*tmp;
	ssize_t	n;

	n = 1;
	while (!ft_strchr(*passed_stuff, '\n') && n)
	{
		n = read(fd, *buf, BUFFER_SIZE);
		(*buf)[n] = '\0';
		tmp = *passed_stuff;
		*passed_stuff = ft_strjoin(tmp, *buf);
		free(tmp);
	}
	free(*buf);
	*buf = NULL;
	*passed_stuff = get_line(passed_stuff, line);
	if (**line == '\0')
	{
		free(*line);
		*line = NULL;
	}
	return (n);
}

char	*get_next_line(int fd)
{
	static char		*passed_stuff = NULL;
	char			*buf;
	char			*line;
	ssize_t			n;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	if (read(fd, buf, 0) < 0)
	{
		free(buf);
		return (NULL);
	}
	if (!passed_stuff)
		passed_stuff = ft_strdup("");
	n = read_file(fd, &buf, &passed_stuff, &line);
	if (n == 0 && !line)
		return (NULL);
	return (line);
}
