#need to cd operation
gcc -c operation/sum.c
gcc -c display.c
gcc -c -I. -Ioperation main.c
# no order
gcc operation display.o main.o -o application