/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 14:48:55 by jeftekha          #+#    #+#             */
/*   Updated: 2017/04/27 14:48:56 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_file	*find_or_create_file(int fd, t_list **file_pointer)
{
	t_list		*file;
	t_file		file_data;

	file = *file_pointer;
	while (file)
	{
		if (((t_file *)(file->content))->fd == fd)
		{
			return (file->content);
		}
		file = file->next;
	}
	file_data.fd = fd;
	file_data.buffer = ft_strnew(BUFF_SIZE);
	if (file_data.buffer == NULL)
	{
		return (NULL);
	}
	file = ft_lstnew(&file_data, sizeof(file_data));
	if (file == NULL)
	{
		return (NULL);
	}
	ft_lstadd(file_pointer, file);
	return ((*file_pointer)->content);
}

static ssize_t	read_at_least_one_line(t_file *file)
{
	char		read_buffer[BUFF_SIZE + 1];
	ssize_t		bytes_read;

	bytes_read = 1;
	while (bytes_read > 0 && ft_strstr(file->buffer, "\n") == NULL)
	{
		bytes_read = read(file->fd, &read_buffer, BUFF_SIZE);
		if (bytes_read == FAILURE)
		{
			return (FAILURE);
		}
		read_buffer[bytes_read] = '\0';
		file->buffer = ft_strjoin(file->buffer, read_buffer);
		ft_memset(read_buffer, '\0', bytes_read);
	}
	return (bytes_read);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*files;
	t_file			*file;
	ssize_t			bytes_read;
	char			*temp;

	if (fd < 0 || line == NULL)
	{
		return (FAILURE);
	}
	file = find_or_create_file(fd, &files);
	if ((bytes_read = read_at_least_one_line(file)) == FAILURE)
	{
		return (FAILURE);
	}
	*line = ft_strcdup(file->buffer, '\n');
	temp = file->buffer;
	file->buffer = ft_strdup(file->buffer + ft_strclen(file->buffer, '\n') + 1);
	free(temp);
	return (**line || bytes_read > 0 ? SUCCESS : END);
}
