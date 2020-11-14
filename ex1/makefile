OBJECTS_LIB=power.o basicMath.o
CFLAGS= -Wall

mymathd: libmyMath.so
mymaths: libmyMath.a

all: mains maind libmyMath.a libmyMath.so
	
mains: main.o libmyMath.a
	gcc $(CFLAGS) main.o libmyMath.a -o mains
	
maind: main.o libmyMath.so
	gcc $(CFLAGS) main.o ./libmyMath.so -o maind
	
main.o: main.c myMath.h
	gcc $(CFLAGS) -c main.c -o main.o

power.o: power.c myMath.h
	gcc $(CFLAGS) -c power.c -o power.o

basicMath.o: basicMath.c myMath.h
	gcc $(CFLAGS) -c basicMath.c -o basicMath.o
	
libmyMath.a: $(OBJECTS_LIB)
	ar -rcs libmyMath.a $(OBJECTS_LIB)
	
libmyMath.so: $(OBJECTS_LIB)
	gcc -shared -o libmyMath.so $(OBJECTS_LIB)
	
.PHONY: clean all

clean:
	rm -f maind mains *.o *a *so 