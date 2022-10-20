#remove wildcard
SRCS=$(wildcard *.c)
NAME= libft.a
OBJS=$(SRCS:.c=.o)

AC=ar
AFLAGS=-rc
CC=gcc
CFLAGS=-Wall -Wextra -Werror -g
INCLUDE := -I include
#create library using object files

all: $(NAME)

$(NAME): $(OBJS)
	$(AC) $(AFLAGS) $(NAME) $(OBJS)
#create object files compiling c files with header dependency
$(OBJS): $(SRCS) $(HDRS)
	$(CC) $(CFLAGS) $(INCLUDE) -c $(SRCS)


bonus: re

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

# Rule to remove everything that has been created by the makefile.
fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(AHRS) removed!"

# Rule to re-make everything.
re:     fclean $(NAME)

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all clean fclean re

