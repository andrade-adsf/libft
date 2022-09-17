NAME = libft.a
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

#		Parte 1
SRCS = 	ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_memset.c ft_strchr.c ft_strdup \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c \
		# Parte 2

OBJS = $(SRCS:.c=.o)

all: $(NAME)

clean:
	$(REMOVE) $(OBJS)

fclean: clean
		$(REMOVE) $(NAME)

re: fclean all

%.o: %.c
		gcc -c $(FLAGS) -I ./ $< -o $@
		ar -rcs $(NAME) $@

$(NAME): $(OBJS)

.PHONY: re fclean clean all $(NAME)
