CFLAGS := $(CFLAGS) -O2 -Wall -g
LIBRARIES := -lwebsockets -larm_api

all: test

test: test.c
	gcc $(LDFLAGS) $(CFLAGS) -I ../api/include/ -I ../api/api -o test test.c $(LIBRARIES)

clean:
	rm -rf test
