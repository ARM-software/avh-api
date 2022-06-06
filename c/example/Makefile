CFLAGS = -O2 -Wall -g
LDFLAGS = -L../api/build/
LIBRARIES = -lwebsockets -l:libarm_api.so

all: test

test: test.c
	gcc $(LDFLAGS) $(CFLAGS) -I ../api/include/ -I ../api/api -o test test.c $(LIBRARIES)

clean:
	rm -rf test
