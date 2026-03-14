CC = gcc
CFLAGS = -g -Iinclude
objs = obj/main.o obj/cadenas.o

bin/longcadena: $(objs)
	$(CC) $(CFLAGS) -o bin/longcadena $(objs)

obj/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o obj/main.o

obj/cadenas.o: src/cadenas.c
	$(CC) $(CFLAGS) -c src/cadenas.c -o obj/cadenas.o
clean:
	rm -f obj/*.o bin/longcadena

install: bin/longcadena
	cp bin/longcadena /usr/local/bin
 