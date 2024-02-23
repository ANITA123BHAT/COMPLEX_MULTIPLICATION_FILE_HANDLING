
CC = g++
CFLAGS = -Wall -Wextra

driver: complexmul.o main.o
	$(CC) $(CFLAGS) complexmul.o main.o -o driver

complexmul.o: complexmul.cpp complex.h
	$(CC) $(CFLAGS) -c complexmul.cpp

main.o : main.cpp complex.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	rm -f *.o driver