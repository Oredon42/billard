CC = g++ -Wall -Wno-deprecated
LDFLAGS = -framework OpenGL -framework GLUT

all: Billard

Billard: main.o boule.o queue.o table.o tapis.o tapis2.o metal.o bois.o trous.o
	$(CC) $(LDFLAGS) main.o boule.o queue.o table.o tapis.o tapis2.o metal.o bois.o trous.o -o Billard

main.o: main.cpp boule.h queue.h table.h
	$(CC) -c main.cpp

boule.o: boule.cpp boule.h
	$(CC) -c boule.cpp

queue.o: queue.cpp queue.h
	$(CC) -c queue.cpp

table.o: table.cpp table.h tapis.h tapis2.h metal.h bois.h trous.h
	$(CC) -c table.cpp

tapis.o: tapis.cpp tapis.h
	$(CC) -c tapis.cpp

tapis2.o: tapis2.cpp tapis2.h
	$(CC) -c tapis2.cpp

metal.o: metal.cpp metal.h
	$(CC) -c metal.cpp

bois.o: bois.cpp bois.h
	$(CC) -c bois.cpp

trous.o: trous.cpp trous.h
	$(CC) -c trous.cpp

clean:
	rm *.o