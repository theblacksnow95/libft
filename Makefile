# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 16:54:42 by emurillo          #+#    #+#              #
#    Updated: 2024/10/16 12:14:29 by emurillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
NAME = libft.a
SOURCES = ft_atoi.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_substr.c ft_bzero.c \
		  ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_calloc.c \
		  ft_isprint.c ft_memmove.c ft_strjoin.c ft_strnstr.c ft_toupper.c\
		  ft_isalnum.c ft_itoa.c ft_memset.c ft_strlcat.c ft_strrchr.c \
		  ft_isalpha.c ft_memchr.c ft_split.c ft_strlcpy.c ft_strtrim.c ft_putchar_fd.c \
		  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) $< -o $@

$(NAME): $(OBJECTS)
	ar cr $@ $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
