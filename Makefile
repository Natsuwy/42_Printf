CC = cc

FLAGS = -Wall -Werror -Wextra

INCLUDE = -I ft_printf.h -I libft.h

NAME = libftprintf.a

SOURCES = ft_char.c ft_deci.c ft_inter.c ft_lohex.c \
	ft_ptrhex.c ft_string.c ft_udeci.c ft_uphex.c id.c printftest.c

OBJ = $(SOURCES: .c=.o)

$(NAME) : $(OBJ)
	ar -rcs $(NAME) ${OBJ}

%.o : %.c
	$(CC) $(FLAG) -c $< -o $@ $(INCLUDE)

all : $(NAME)

clean :
	rm -f $(OBJ) libft.so

fclean : clean
	rm -f $(NAME)

re : fclean all