OBJECTS_LIB=myBank.o
CFLAGS= -Wall

mybankd: libmyBank.so
mybanks: libmyBank.a

all: mains maind libmyBank.a libmyBank.so

mains: main.o libmyBank.a
	gcc $(CFLAGS) main.o libmyBank.a -o mains

maind: main.o libmyBank.so
	gcc $(CFLAGS) main.o ./libmyBank.so -o maind
	
main.o: main.c myBank.h
	gcc $(CFLAGS) -c main.c -o main.o
	
myBank.o: myBank.c myBank.h
	gcc $(CFLAGS) -c myBank.c -o myBank.o

libmyBank.a: $(OBJECTS_LIB)
	ar -rcs libmyBank.a $(OBJECTS_LIB)
	
libmyBank.so: $(OBJECTS_LIB)
	gcc -fPIC -shared -o libmyBank.so $(OBJECTS_LIB)
	
.PHONY: clean all

clean:
	rm -f maind mains *.o *a *so 