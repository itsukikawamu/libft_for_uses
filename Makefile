NAME=libft.a
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, obj/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

obj/%.o: %.c
	cc -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	cc -Wall -Wextra -Werror -fPIC -c *.c
	cc -shared -o libft.so *.o


.PHONY: all clean fclean re
