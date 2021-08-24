C = gcc
opt = -shared -fPIC -O3 -std=c17

lib:
	${C} ${opt} -o lib.so lib.c

gmp: 
	${C} ${opt} -lgmp -o gmp.so gmpp.c