CC = g++
GITDIR = ~/Documents/semester-two-project-CAL/final-project
CPPSRC = $(GITDIR)/src/cpp
LUASRC = $(GITDIR)/src/lua
CPPFILES = $(CPPSRC)/*.cpp
LUAFILES = $(LUASRC)/*

all: clean build

build:
	$(CC) $(CPPFILES) -o ./bin/final-project -llua -ldl -lcurses
	cp -rt $(GITDIR)/bin $(LUAFILES)

clean:
	rm -rf $(GITDIR)/bin/*
