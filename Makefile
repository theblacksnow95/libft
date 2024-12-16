# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emurillo <emurillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 16:54:42 by emurillo          #+#    #+#              #
#    Updated: 2024/12/16 23:42:22 by emurillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c
NAME = libft.a
PRINTF_DIR = printf
GNL_DIR = get_next_line
LIBFT_SOURCES = ft_atoi.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_substr.c ft_bzero.c \
		  ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_calloc.c \
		  ft_isprint.c ft_memmove.c ft_strjoin.c ft_strnstr.c ft_toupper.c\
		  ft_isalnum.c ft_itoa.c ft_memset.c ft_strlcat.c ft_strrchr.c \
		  ft_isalpha.c ft_memchr.c ft_split.c ft_strlcpy.c ft_strtrim.c ft_putchar_fd.c \
		  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c

PRINTF_SOURCES = $(PRINTF_DIR)/ft_checkflags.c $(PRINTF_DIR)/ft_printf.c $(PRINTF_DIR)/ft_putchar_fd_int.c \
				$(PRINTF_DIR)/ft_putnbr_pf.c $(PRINTF_DIR)/ft_putpointer.c $(PRINTF_DIR)/ft_putstr_fd_int.c \
				$(PRINTF_DIR)/ft_strlen_pf.c

GNL_SOURCES = $(GNL_DIR)/get_next_line_utils.c $(GNL_DIR)/get_next_line.c

BONUSSOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
			   ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
			   ft_lstmap_bonus.c

SOURCES = $(LIBFT_SOURCES) $(PRINTF_SOURCES) $(GNL_SOURCES)

OBJECTS = $(SOURCES:.c=.o)

BONUSOBJECTS = $(BONUSSOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(BONUSOBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: all $(BONUSOBJECTS)
	ar crs $(NAME) $(BONUSOBJECTS)

.PHONY: all clean fclean re
