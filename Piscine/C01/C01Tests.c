EX00
#include <stdio.h>
int main(void)
{
	int a = 1;
	printf("%i", a);
	printf("\n");
	ft_ft(&a);
	printf("%i", a);	
}

Ex01:
#include <stdio.h>
int main(void)
{
	int value = 0;
	printf("Value before: %d\n", value);	
	int *p1 = &value;
	int **p2 = &p1;
        int ***p3 = &p2;
        int ****p4 = &p3;
        int *****p5 = &p4;
        int ******p6 = &p5;
        int *******p7 = &p6;
        int ********p8 = &p7;
        int *********p9 = &p8;	
        ft_ultimate_ft(p9);
        printf("Value: %d\n", value);
        return 0;
}

EX02
#include <stdio.h>
int main(void)
{
	int x = 5;
	int y = 10;
    	ft_swap(&x, &y);
    	printf("Test 1: x = %d, y = %d (Expected: x = 10, y = 5)\n", x, y);
}

Ex03
#include <stdio.h>
int main(void)
{
	int div;
	int mod;
	
	ft_div_mod(10, 3, &div, &mod);
    	printf("Test 1: ft_div_mod(10, 3) => div: %d, mod: %d (Expected: div: 3, mod: 1)\n", div, mod);
    	ft_div_mod(5, 5, &div, &mod);
    	printf("Test 2: ft_div_mod(5, 5) => div: %d, mod: %d (Expected: div: 1, mod: 0)\n", div, mod);
}

ex04:
#include <stdio.h>
int main(void)
{
	int x = 10;
	int y = 3;
	ft_ultimate_div_mod(&x, &y);
    	printf("Test 1: ft_div_mod(10, 3) => div: %d, mod: %d (Expected: div: 3, mod: 1)\n", x, y);
    	x = 5;
	y = 5;
    	ft_ultimate_div_mod(&x, &y);
    	printf("Test 2: ft_div_mod(5, 5) => div: %d, mod: %d (Expected: div: 1, mod: 0)\n", x, y);
}


ex05:
int main(void)
{
	ft_putstr("Hello World\n");
	ft_putstr("Hello evaluator\n");
	ft_putstr("ajhfkahsdfjkhasdkfkadshfkjadsfkjahdkjfjha");
}

Ex06:
#include <stdio.h>
int main(void)
{
	int a;
	
	a = ft_strlen("Hello World");
	printf("%i", a);
	printf("\n");
	a = ft_strlen("Hello evaluator");
	printf("%i", a);
	printf("\n");
	a = ft_strlen("ajhfkahsdfjkhasdkfkadshfkjadsfkjahdkjfjha");
	printf("%i", a);
}
