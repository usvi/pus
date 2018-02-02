CC = g++
LINK_APT = -lapt-pkg
DEBUG = -g


all: listpacks listupgrades makeupgrades

clean:
	rm -rf listpacks
	rm -rf listupgrades
	rm -rf makeupgrades

listpacks: listpacks.cc
	g++ -Wall -o $@ $< $(LINK_APT)

listupgrades: listupgrades.cc
	g++ -Wall -o $@ $< $(LINK_APT)

makeupgrades: makeupgrades.cc
	g++ -Wall -o $@ $< $(LINK_APT)

