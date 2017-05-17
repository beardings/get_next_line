/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mponomar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:25:53 by mponomar          #+#    #+#             */
/*   Updated: 2017/02/16 19:09:23 by mponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include "libft/libft.h"
# include <stdio.h>

# define BUFF_SIZE 5
# define ERROR -1
# define START() i = 0, n = 0, tmp = NULL
# define NEW() n = 0, i++

typedef struct		s_stat
{
	int				fd;
	char			*str;
	struct s_stat	*next;
}					t_stat;

int					get_next_line(const int fd, char **line);

#endif
