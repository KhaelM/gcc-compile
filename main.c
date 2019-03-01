#include <stdio.h>

#include "display.h"
#include "sum.h"

int main(int argc, char const *argv[])
{
    int a = 5;   
    int b = 10;
    int result = sum(a, b); 
    display(a);
    return 0;
}