NAME = zombies
CC = g++
FLAGS = -Wall -Wextra -Werror
MKDIR = mkdir

BUILD_PATHS = $(PATHB) $(PATHO)
PATHB = build/
PATHO = build/objs/
PATHS = src/


src = src/Zombie.cpp \
		src/main.cpp \
		src/randomChump.cpp \
		src/newZombie.cpp

HEADERS = src/Zombie.hpp

OBJS	=	$(addprefix $(PATHO), $(notdir $(patsubst %.cpp, %.o, $(src))))

all: $(BUILD_PATHS) $(NAME)

$(PATHO)%.o:: $(PATHS)%.cpp
	@echo "Compiling ${notdir $<}"
	@$(CC) -c $< -o $@

$(NAME): $(OBJS) $(HEADERS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME) 
	@echo "Success"

$(PATHB):
	@$(MKDIR) $(PATHB)

$(PATHO):
	@$(MKDIR) $(PATHO)

clean:
	@echo "Cleaning"
	@rm -f $(OBJS)
	@rmdir $(PATHO) $(PATHB)

fclean: clean
	@rm -f $(NAME)

re: fclean all