all: ./src/calendar.c
	gcc -o all ./src/calendar.c
run: ./src/calendar.c
	./all.exe
clean:
	rm ./all.exe
valgrind:
	valgrind  ./$(TEST_PROJ_NAME).$(EXEC)