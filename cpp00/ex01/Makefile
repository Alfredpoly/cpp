NAME = phonebook
CC = g++
FLAGS = -Wall -Wextra -Werror
MKDIR = mkdir

BUILD_PATHS = $(PATHB) $(PATHO)
PATHB = build/
PATHO = build/objs/
PATHS = src/


src = src/main.cpp \
		src/Contact.cpp \
		src/Phonebook.cpp 

HEADERS = src/Contact.hpp \
			src/Phonebook.hpp

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
	@rm -rf $(PATHO) $(PATHB)

fclean: clean
	@rm -f $(NAME)

re: fclean all