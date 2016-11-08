NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
CFILES=		ft_bzero.c		\
			ft_memalloc.c	\
			ft_memdel.c		\
			ft_memset.c		\
			ft_strcat.c		\
			ft_strclr.c		\
			ft_strcmp.c		\
			ft_strcpy.c		\
			ft_strdel.c		\
			ft_strequ.c		\
			ft_striter.c	\
			ft_striteri.c	\
			ft_strjoin.c	\
			ft_strlen.c		\
			ft_strmap.c		\
			ft_strmapi.c	\
			ft_strncmp.c	\
			ft_strnequ.c	\
			ft_strnew.c		\
			ft_strsub.c		\
			ft_strtrim.c	\
			ft_strsplit.c	\
			ft_itoa.c		\
			ft_putchar.c	\
			ft_putstr.c		\
			ft_putendl.c	\
			ft_putnbr.c		\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c


OBJ=$(CFILES:%.c=%.o)
all: $(NAME)

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
