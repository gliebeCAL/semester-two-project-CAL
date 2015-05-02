CC = g++
CPPSRC = ./src/cpp
LUASRC = ./src/lua
CPPFILES = $(CPPSRC)/*.cpp
LUAFILES = $(LUASRC)/*

all: example

example:
	$(CC) $(CPPFILES) -o ./bin/final-project -llua -ldl -lcurses
	cp -rt ./bin $(LUAFILES)

clean:
	rm -rf ./bin/*
