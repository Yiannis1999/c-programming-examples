CC = gcc
CFLAGS = -fmerge-constants -Wl,--unique=.rodata*
LIBS = -lm
SRCS = $(wildcard c/*.c)
TARGETS = $(patsubst c/%.c,bin/%,$(SRCS))

all: bin $(TARGETS)

bin:
	mkdir -p bin

bin/%: c/%.c
	$(CC) $(CFLAGS) $< -o $@ $(LIBS)

clean:
	$(RM) -r bin
