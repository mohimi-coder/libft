# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 23:22:42 by mohimi            #+#    #+#              #
#    Updated: 2023/11/13 12:03:18 by mohimi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g

FILE = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		 ft_isprint.c ft_strlen.c  ft_memset.c ft_memcpy.c ft_bzero.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_atoi.c \
		 ft_strlcat.c ft_toupper.c  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strnstr.c ft_calloc.c \
		 ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJECT_FILE = $(FILE:.c=.o)

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c

BONUS_FILE = $(BONUS:.c=.o)

HEADER = libft.h

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJECT_FILE)
	ar rc  $(NAME) $(OBJECT_FILE) 

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus : $(OBJECT_FILE) $(BONUS_FILE)
		ar rc $(NAME) $(OBJECT_FILE) $(BONUS_FILE)

clean : 
	rm -f *.o

re : fclean all

fclean : clean
	rm -f $(NAME)

.PHONY : all clean fclean re bonus
