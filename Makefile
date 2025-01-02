FILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c ft_strdup.c ft_striteri.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c

FILES_B = 

NAME = libft.a
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror
FILES = $(FILES:.c=.o)
FILES_B = $(FILES_B:.c=.o)
AR = ar rcs
RM = rm -f

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: ${NAME}

$(NAME): ${FILES}
	$(AR) $(NAME) $(FILES)

bonus: ${NAME} ${FILES_B}
	$(AR) $(NAME) $(FILES_B)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME) $(FILES)

re: fclean all

.PHONY: all clean fclean re bonus