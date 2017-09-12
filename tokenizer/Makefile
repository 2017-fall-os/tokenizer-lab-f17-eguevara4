all: test

CFLAGS = -g -O2

test: test.o mytoc.o
	cc -o test test.o mytoc.o
	./test
clean:
	rm -f *.o test test.exe
cleanBackups:
	rm -f *~ 
