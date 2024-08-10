Library = pipex

CFILES = $(wildcard *.c)
OFILES = $(CFILES:.c=.o)

Compiler = gcc
Flags =  -Wall -Wextra -Werror

OUTN = $(Library)
NAME = $(OUTN)

all: $(NAME)

$(NAME): $(OFILES)
	$(Compiler) $(Flags) $(OFILES) -o $(OUTN)

%.o: %.c
	$(Compiler) $(Flags) -c $< -o $@ -I./

clean:
	rm -rf $(OFILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re