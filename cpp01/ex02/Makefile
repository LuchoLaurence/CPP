# nom du programme
NAME = hi

# compialteur et flags
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98

#rm
RM = rm -rf

# fichiers srcs
SRCS = main.cpp

OBJ = ./objs

OBJS = $(addprefix $(OBJ)/, $(SRCS:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJ)/%.o: ./%.cpp
	@mkdir -p $(dir $@) # Crée le répertoire "objs" s'il n'existe pas
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	rm -rf $(OBJ)
	rm -f $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean re