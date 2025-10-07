NAME    = program
CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRC     = 
OBJ     = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "✅ Build complete: $(NAME)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "🔧 Compiled: $<"

clean:
	@rm -f $(OBJ)
	@echo "🧹 Object files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "🗑️  Executable removed"

re: fclean all

.PHONY: all clean fclean re
