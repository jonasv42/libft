# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvets <jvets@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/22 13:05:43 by jvets             #+#    #+#              #
#    Updated: 2023/08/10 22:15:54 by jvets            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c
SOURCES += ./ft_strlen.c ./ft_strlcpy.c ./ft_strlcat.c ./ft_strchr.c ./ft_strrchr.c
SOURCES += ./ft_strncmp.c ./ft_strnstr.c ./ft_toupper.c ./ft_tolower.c ./ft_memcpy.c
SOURCES += ./ft_memset.c ./ft_memmove.c ./ft_memchr.c ./ft_memcmp.c ./ft_calloc.c
SOURCES += ./ft_atoi.c ./ft_strdup.c ./ft_bzero.c ./ft_strjoin.c ./ft_substr.c
SOURCES += ./ft_strtrim.c ./ft_itoa.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c
SOURCES += ./ft_putnbr_fd.c ./ft_strmapi.c ./ft_striteri.c ./ft_split.c

BONUSSOURCES = ./ft_lstsize_bonus.c ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c
BONUSSOURCES += ./ft_lstlast_bonus.c ./ft_lstadd_back.c ./ft_lstdelone_bonus.c
BONUSSOURCES += ./ft_lstclear_bonus.c ./ft_lstiter.c ./ft_lstmap_bonus.c

OBJECTS = $(SOURCES:%.c=%.o)

BONUSOBJECTS = $(BONUSSOURCES:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)

%.o: %.c libft.h
	gcc $(FLAGS) -c $< -o $@
	ar -rcs $(NAME) $@

bonus: $(BONUSOBJECTS)

clean:
	rm -f *.o

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
