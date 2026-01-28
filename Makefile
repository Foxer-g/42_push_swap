CC = cc
CFLAGS = -Wall -Werror -Wextra -g
NAME = push_swap
SRCDIR = src/
OBJDIR = build/
INCLUDE = -Iinclude -Ilibft/include
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a
LDFLAGS = -L$(LIBFT_DIR)
LDLIBS = -lft

OBJ = main.o \
	parser/parsing.o \
	parser/parsing_utils.o \

OBJS = $(addprefix $(OBJDIR), $(OBJ))

all: $(NAME)

$(OBJDIR):
	mkdir -p $@
	mkdir -p $@/parser

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) $(LDLIBS) -o $@

$(LIBFT):
	make -C $(LIBFT_DIR) -j

$(OBJDIR)%.o: $(SRCDIR)%.c | $(OBJDIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(OBJDIR)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean
	make -C $(LIBFT_DIR) re -j
	make all

.PHONY: all clean fclean re
