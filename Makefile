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
	sort.o\
	parser/parsing.o \
	parser/parsing_utils.o \
	stack_action/stack_io.o\
	stack_action/swap_action.o\
	stack_action/push_action.o\
	stack_action/rotate_action.o\
	stack_action/reverse_rotate_action.o\
	sorting/short_sort.o\
	sorting/target_node.o\
	sorting/to_top_cost.o\
	sorting/turk_sort.o\

OBJS = $(addprefix $(OBJDIR), $(OBJ))

all: $(NAME)

$(OBJDIR):
	mkdir -p $@
	mkdir -p $@/parser
	mkdir -p $@/stack_action
	mkdir -p $@/sorting

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
