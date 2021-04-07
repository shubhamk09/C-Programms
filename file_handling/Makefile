# Comments
#Target :dependency
#<Tab>Command
PROJECT_NAME=filehandling

INC= inc
SSRC=src

SRC=main.c \
src/fun.c

# TEST_SRC=test_complex.c\
# unity.c

$(PROJECT_NAME):$(SRC) $(INC)
	gcc -I$(INC) -I$(SSRC) $(SRC) -o $(PROJECT_NAME).out

run:$(PROJECT_NAME)
	./$(PROJECT_NAME).out

coverage:$(PROJECT_NAME)
	gcc -fprofile-arcs -ftest-coverage $(SRC) -o $(PROJECT_NAME).out
	./${PROJECT_NAME}.out
	gcov -a $(SRC)

valgrind:$(PROJECT_NAME)
	valgrind ./${PROJECT_NAME}.exe

cppcheck:$(SRC)
	cppcheck $(SRC)

clean:$(SRC)
	rm *gcov *gcda *gch
