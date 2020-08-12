SOURCE = unity/unity.c \
src/memory_allocation.c \
src/substring.c \
test/test_substring.c \
main.c 

INCLUDE = -Iunity \
-Iinclude \
-Itest

PROJECT_NAME = SUBSTRING.out

$(PROJECT_NAME): $(SRC)
	gcc $(SOURCE) $(INCLUDE) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./$(PROJECT_NAME)

doc: 
	make -C documentation

