all:
	gcc mem.c -o mem -Wall -Werror -std=gnu99
	./mem
	hexdump -vC mem.img
