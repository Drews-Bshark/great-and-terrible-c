NAME = ft_display_file
SRCS = srcs/ *.c
INCLUDES = includes/
all:
	gcc -Wall -Wextra -Werror -o $(NAME) main.c $(SRCS) -I $(INCLUDES) 
clean:
	rm -f * .o
fclean: clean
	rm -f $(NAME)
re: fclean all

