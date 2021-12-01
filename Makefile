CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_MAT=my_mat.o
FLAGS= -Wall -g

all: MAT my_mat.so MAT my_mat.a progmains progmaind
progmains: $(OBJECTS_MAIN) MAT my_mat.a
	$(CC) $(FLAGS) -o progmains $(OBJECTS_MAIN) MAT my_mat.a
progmaind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o progmaind $(OBJECTS_MAIN) ./MAT my_mat.s o
MAT my_mat.so: $(OBJECTS_MAT)
	$(CC) -shared -o MAT my_mat.so $(OBJECTS_MAT)
MAT my_mat.a: $(OBJECTS_MAT)
	$(AR) -r cs MAT my_mat.a $(OBJECTS_MAT)
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c
main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so progmains progmaind
