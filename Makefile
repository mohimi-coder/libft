CC = cc

FLAGS = -Wall -Wextra -Werror

FILE = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		 ft_isprint.c ft_strlen.c  ft_memset.c ft_memcpy.c ft_bzero.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_atoi.c \
		 ft_strlcat.c ft_toupper.c  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strnstr.c ft_calloc.c \
		 ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

OBJECT_FILE = $(FILE:.c=.o)

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c

BONUS_FILE = $(BONUS:.c=.o)

HEADER = libft.h

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJECT_FILE)
	ar rc $(NAME) $(OBJECT_FILE)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

bonus : $(BONUS_FILE)
		ar rc $(NAME) $(BONUS_FILE)

clean :
	rm -f $(OBJECT_FILE) $(BONUS_FILE)

re : fclean all

fclean : clean
	rm -f $(NAME)

.PHONY : all clean fclean re bonus
