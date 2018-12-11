LIB = libft.a
SRCS = srcs/*.c
OUT = *.c
INCLUDES = includes/
all:
	gcc -Wall -Wextra -Werror -c $(SRCS) -I $(INCLUDES)
	ar rc $(LIB) $(OUT)
	ranlib $(LIB)
clean:
	rm -f $(OUT)
fclean:  clean
	rm -f $(LIB)
re: fclean all
