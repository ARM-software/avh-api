CFLAGS := $(CFLAGS) -O2 -Wall -g
LIBRARIES := -lwebsockets -larm_api

all: example

example: example.c
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $^ $(LIBRARIES)

clean:
	rm -f example
