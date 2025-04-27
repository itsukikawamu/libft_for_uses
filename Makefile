NAME=libft.a
SRCS=$(wildcard *.c)
OBJS=$(patsubst %.c, obj/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

obj/%.o: %.c
	@mkdir -p obj
	cc -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:
	@echo "no bonus"

so: $(OBJS)
	$(CC) -shared -o libft.so $(OBJS)


.PHONY: all clean fclean re
