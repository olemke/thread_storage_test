CFLAGS=-fopenmp
CXXFLAGS=${CFLAGS}

LDFLAGS=-lstdc++ -fopenmp

all: thread_test

thread_test: pointer.o thread_test.o

.PHONY:
clean:
	rm -f *.o thread_test

