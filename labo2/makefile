CC = gcc
CFLAGS = -g -Iinclude
objs = obj/area.o obj/aritmetica.o obj/main.o

bin/rectanysuma: $(objs)
	$(CC) $(CFLAGS) -o bin/rectanysuma $(objs)

obj/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o obj/main.o

obj/area.o: src/area.c
	$(CC) $(CFLAGS) -c src/area.c -o obj/area.o

obj/aritmetica.o: src/aritmetica.c
	$(CC) $(CFLAGS) -c src/aritmetica.c -o obj/aritmetica.o

clean:
	rm -f obj/*.o bin/rectanysuma

install: bin/rectanysuma
	cp bin/rectanysuma /usr/local/bin
