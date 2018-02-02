CC = g++
LINK_APT = -lapt-pkg
DEBUG = -g


all: listpacks

clean:
	rm -rf listpacks

listpacks: listpacks.c
	g++ -Wall -o $@ $< $(LINK_APT)


