CC = g++
CPPSRC = ./src/cpp
LUASRC = ./src/lua
CPPFILES = $(CPPSRC)/*
LUAFILES = $(LUASRC)/*

all: example

example:
	$(CC) $(CPPFILES) -o ./bin/Mini-Project-One -llua -ldl
	cp -t ./bin $(LUAFILES)

clean:
	rm -rf ./bin/*
