# Comments
#Target :dependency
#<Tab>Command
PROJECT_NAME=all.exe
SRC=test.c sum.c sq.c
$(PROJECT_NAME):$(SRC)
	gcc $(SRC) -o all.exe

run:$(PROJECT_NAME)
	$(PROJECT_NAME)

clean: 
	del /q *.exe