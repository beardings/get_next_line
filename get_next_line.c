/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:39:18 by mponomar          #+#    #+#             */
/*   Updated: 2017/05/10 17:55:13 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					check(char *res)
{
	int				i;

	i = 0;
	while (res[i] != '\0')
	{
		if (res[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char				*begin(const int fd, char *tmp)
{
	char			*res;
    char            *tmp1;

	tmp == NULL ? tmp = ft_strnew(0) : 0;
	res = ft_strnew(BUFF_SIZE);
	if (read(fd, res, BUFF_SIZE) > 0)
	{
		if (check(res))
		{
			tmp1 = ft_strjoin(tmp, res);
            ft_strdel(&res);
            ft_strdel(&tmp);
			return (tmp1);
		}
		else
			tmp1 = ft_strjoin(tmp, res);
        ft_strdel(&tmp);
		ft_strdel(&res);
		return (begin(fd, tmp1));
	}
	if (tmp != NULL)
		return (tmp);
	return (0);
}

t_stat				*findlst(t_stat **lst, int fd)
{
	t_stat			*tmp;

	tmp = *lst;
	if (tmp != NULL)
	{
		while ((tmp != NULL) && (tmp->fd != fd))
			tmp = tmp->next;
		if (tmp && tmp->fd == fd)
			return (tmp);
	}
	if (tmp == NULL)
	{
		tmp = malloc(sizeof(t_stat));
		tmp->fd = fd;
		tmp->str = NULL;
		tmp->next = NULL;
	}
	*lst != NULL ? tmp->next = *lst : 0;
	*lst = tmp;
	return (*lst);
}

int					get_next_line(const int fd, char **line)
{
	static t_stat	*lst;
	t_stat			*res;
	char			*tmp;
	size_t			i;
	size_t			n;

	START();
	res = findlst(&lst, fd);
	if (read(res->fd, NULL, 0) < 0 || BUFF_SIZE < 0 || !line || res->fd < 0)
		return (ERROR);
	res->str == NULL ? tmp = begin(res->fd, tmp) : 0;
	res->str != NULL && !(check(res->str)) ? tmp = ft_strdup(res->str) : 0;
	res->str != NULL && (check(res->str)) ? tmp = ft_strdup(res->str) : 0;
	res->str != NULL && !(check(tmp)) ? tmp = begin(res->fd, tmp) : 0;
	*line = ft_strnew(ft_strlen(tmp));
	if (tmp[0] == '\0')
		return (0);
	while (tmp[i] != '\n' && tmp[i] != '\0')
		(*line)[n++] = tmp[i++];
	res->str = ft_strnew(ft_strlen(tmp) - i + 1);
	NEW();
	while (tmp[i] != '\0')
		res->str[n++] = tmp[i++];
	ft_strdel(&tmp);
	return (n == 0 && i == 0 ? 0 : 1);
}
