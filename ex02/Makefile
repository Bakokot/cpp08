NAME			:= mutantStack 

########################   CLASSES   ########################
CLASS			:=  
SRC_CLASS		:=  $(addsuffix .cpp, $(CLASS))
INC_CLASS		:=  $(addsuffix .hpp, $(CLASS))

########################   SOURCES   ########################
SRC_DIR			:=	src/
SRC       		:=	main.cpp 

########################   INCLUDES   ########################
INC_DIR			:=	inc/
INC				:= MutantStack.hpp

########################   SOURCES + INCS + OBJECTS   ########################
INC				+=	$(INC_CLASS)
SRC				+=	$(SRC_CLASS)
HEADERS			:=	$(addprefix $(INC_DIR), $(INC))

########################   .o Files   ########################
OBJ_DIR        :=    obj/
OBJ            :=    $(SRC:%.cpp=$(OBJ_DIR)%.o)

########################   COMPILER   ########################
CC            :=    c++
CC_FLAGS      :=    -Wextra -Werror -Wall -std=c++98 

########################   RULES   ########################
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CC_FLAGS) $(OBJ) -o $@
	@echo "All compiled"

$(OBJ): $(OBJ_DIR)%.o: $(SRC_DIR)%.cpp $(HEADERS) Makefile
	@mkdir -p $(@D)
	$(CC) $(CC_FLAGS) -I $(INC_DIR) -c $< -o $@

run: all
	./$(NAME)

clean:
	rm -rf $(OBJ_DIR)
	@echo "Every .o removed"

fclean: clean
	rm -rf $(NAME)
	@echo "Binary removed"

re: fclean all

.PHONY: all clean fclean re 
