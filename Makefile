object :
	clang -c -Wall -Wextra -Werror ft_atoi.c ft_bzero.c ft_calloc.c
	clang -c -Wall -Wextra -Werror ft_isalnum.c ft_isalpha.c ft_isascii.c
	clang -c -Wall -Wextra -Werror ft_isdigit.c ft_isprint.c ft_memchr.c
	clang -c -Wall -Wextra -Werror ft_memcmp.c ft_memcpy.c ft_memmove.c
	clang -c -Wall -Wextra -Werror ft_memset.c ft_putchar_fd.c ft_putstr_fd.c
	clang -c -Wall -Wextra -Werror ft_strchr.c ft_strdup.c ft_strlcat.c
	clang -c -Wall -Wextra -Werror ft_strlcpy.c ft_strlen.c ft_strlcpy.c
	clang -c -Wall -Wextra -Werror ft_strncmp.c ft_strnstr.c ft_strrchr.c
	clang -c -Wall -Wextra -Werror ft_tolower.c ft_toupper.c ft_putnbr_fd.c ft_putendl_fd.c 
libmake:
	ar rcs libft.a ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_putnbr_fd.o ft_putendl_fd.o ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putstr_fd.c ft_strlcpy.o ft_strlen.o ft_strlcpy.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o
main:
	clang -Wall -Wextra -Werror libft.a main.c
clear:
	rm *.o *.out
clearlib:
	rm *.a