#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mponomar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 14:21:54 by mponomar          #+#    #+#              #
#    Updated: 2016/12/12 16:42:16 by mponomar         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CFLAGS = -Wall -Wextra -Werror

SOURCE = ft_isascii.c \
		ft_isdigit.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strdup.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncat.c \
		ft_strcat.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strlcat.c \
		ft_atoi.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_memccpy.c \
		ft_bzero.c \
		ft_memchr.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_putendl.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strlcat.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lenint.c \
		ft_signint.c \
		ft_newsize.c \
		ft_hz.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_spacetrim.c

OBJECTS = $(SOURCE:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all