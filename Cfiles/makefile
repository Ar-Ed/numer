C = gcc
opt = -shared -fPIC -O3 -std=c17

all:
	${C} ${opt} -lgmp -o gmp.dylib gmpp.c
	${C} ${opt} -o lib.dylib lib.c
	
lib:
	${C} ${opt} -o lib.dylib lib.c

gmp: 
	${C} ${opt} -lgmp -lmpfr -o gmp.dylib gmpp.c