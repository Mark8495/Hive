#include <stdio.h>
#include "ft_abs.h"

int main() {
    int a = -5;
    int b = -10;
    int c = 0;
    int d = -42;


    printf("ABS(%d) = %d\n", a, ABS(a));   
    printf("ABS(%d) = %d\n", b, ABS(b));   
    printf("ABS(%d) = %d\n", c, ABS(c));
    printf("ABS(%d) = %d\n", d, ABS(d));


    return 0;
}
