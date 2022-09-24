NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = 		./src/ft_atoi.c ./src/ft_isalnum.c ./src/ft_isalpha.c ./src/ft_isascii.c ./src/ft_isdigit.c\
			./src/ft_putnbr_base_unsigned_long.c ./src/ft_putnbr_base.c ./src/ft_isprint.c\
			./src/libftprintf.c ./src/ft_printf_hexa_utils.c ./src/ft_printf_utils.c ./src/ft_printf_utils_2.c\
			./src/ft_lstdelone.c ./src/ft_lstclear.c ./src/ft_lstiter.c ./src/ft_lstadd_back.c ./src/ft_lstmap.c \
			./src/ft_strlen.c ./src/ft_strncmp.c ./src/ft_toupper.c ./src/ft_tolower.c ./src/ft_memset.c ./src/ft_bzero.c\
			./src/ft_lstsize.c ./src/ft_lstlast.c ./src/ft_lstadd_front.c ./src/get_next_line.c ./src/get_next_line_utils.c\
			./src/ft_memcpy.c ./src/ft_memmove.c ./src/ft_strlcpy.c ./src/ft_strlcat.c ./src/ft_strnstr.c ./src/ft_calloc.c \
			./src/ft_strdup.c ./src/ft_substr.c ./src/ft_strjoin.c ./src/ft_strtrim.c ./src/ft_striteri.c ./src/ft_strmapi.c \
			./src/ft_putchar_fd.c ./src/ft_putstr_fd.c ./src/ft_putendl_fd.c ./src/ft_putnbr_fd.c ./src/ft_lstnew.c ./src/ft_memcmp.c\
			./src/ft_strchr.c ./src/ft_strrchr.c ./src/ft_memchr.c ./src/ft_split.c ./src/ft_itoa.c ./src/ft_putnbr_base_unsigned_int.c\

BONUSOBJ = $(BONUSSRCS:%c=%o)

OBJ = $(SRCS:%c=%o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Done!"

clean:

	@echo "___________________"
	@echo ""
	@echo "*Simple clean. . .*"
	@rm -f $(OBJ)
	@echo "___________________"

fclean:
	@echo "______________________________"
	@echo ""
	@echo "*So fresh and so clean . . .*"
	@rm -f $(NAME) $(OBJ)
	@echo "*clean...                   *"
	@echo "______________________________"

re:	fclean all