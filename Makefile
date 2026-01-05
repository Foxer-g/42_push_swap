CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
OBJDIR = build/
SRCDIR = src/
OBJ = main.o\

all:$(NAME)

$(OBJDIR):
	@mkdir -p $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) 

$(OBJDIR)%.o : $(SRCDIR)%.c $(OBJDIR)
	$(CC) $(CFLAGS) $< -c -o $@

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all re clean fclean
