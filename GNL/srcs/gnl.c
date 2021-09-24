/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykman <mykman@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 00:34:22 by mykman            #+#    #+#             */
/*   Updated: 2021/09/24 18:26:45 by mykman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	free_return(char **str, int ret_value)
{
	if (*str)
		free(*str);
	*str = NULL;
	return (ret_value);
}

char	*ft_substr(char *s, int start, int len, int s_free)
{
	char	*p;

	if (len < 0)
		len = ft_strlen(s);
	p = (char *)malloc(sizeof(*p) * (len + 1));
	if (p)
	{
		p[len] = 0;
		ft_memcpy(p, s + start, len);
	}
	if (s_free || !p)
	{
		free(s);
		return (NULL);
	}
	return (p);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	int		size;
	char	*ptr;

	size = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s1, ft_strlen(s1));
	ft_memcpy(ptr + ft_strlen(s1), s2, ft_strlen(s2));
	ptr[size] = 0;
	if (s1)
		free(s1);
	return (ptr);
}

int	get_next_line(int fd, char **line)
{
	static char	*saved[OPEN_MAX];
	char		*buff;
	int			bytes;

	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (read(fd, NULL, 0) < 0 || !line || !buff)
		return (free_return(&buff, -1));
	bytes = 1;
	while (ft_index(saved[fd], '\n') < 0 && bytes != 0)
	{
		bytes = (int)read(fd, buff, BUFFER_SIZE);
		buff[bytes] = 0;
		saved[fd] = gnl_strjoin(saved[fd], buff);
		if (!saved[fd])
			return (free_return(&buff, -1));
	}
	free(buff);
	*line = ft_substr(saved[fd], 0, ft_index(saved[fd], '\n'), 0);
	saved[fd] = ft_substr(saved[fd], ft_index(saved[fd], '\n') + 1,
			ft_strlen(saved[fd]) - ft_index(saved[fd], '\n'), 1);
	if (!*line || !saved[fd])
		return (free_return(line, -1));
	if (!bytes)
		return (free_return(&saved, 0));
	return (1);
}
