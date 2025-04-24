NAME=libft.a
SRCS=$(wildcard src/*.c)
OBJS=$(patsubst src/%.c,obj/%.o,$(SRCS))

INCDIR = include

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

obj/%.o: src/%.c
	cc -I$(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
