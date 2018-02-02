CC = g++
LINK_APT = -lapt-pkg
DEBUG = -g


all: listpacks listupgrades

clean:
	rm -rf listpacks
	rm -rf listupgrades

listpacks: listpacks.cc
	g++ -Wall -o $@ $< $(LINK_APT)

listupgrades: listupgrades.cc
	g++ -Wall -o $@ $< $(LINK_APT)

