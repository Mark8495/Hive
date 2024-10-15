ex01:
#include <stdio.h>
int main(void)
{
	printf("%d", ft_strlen("Hello");
}

int main(void)
{
	ft_putstr("Hello");
}


ex02:
int main(void)
{

    ft_putnbr(0);
    write(1, "\n", 1);


    ft_putnbr(123);
    write(1, "\n", 1);

    ft_putnbr(-456789);
    write(1, "\n", 1);
}


ex03:
#include <stdio.h>
int main(void)
{
    // Test cases
    char *test1 = "   -123";             
    char *test2 = "   +123";            
    char *test3 = "---+--+1234ab567";    
    char *test4 = "42";                  
    char *test5 = "-42"; 
    
    printf("Test 1: \"%s\" -> %d\n", test1, ft_atoi(test1));
    printf("Test 2: \"%s\" -> %d\n", test2, ft_atoi(test2));
    printf("Test 3: \"%s\" -> %d\n", test3, ft_atoi(test3));
    printf("Test 4: \"%s\" -> %d\n", test4, ft_atoi(test4));
    printf("Test 5: \"%s\" -> %d\n", test5, ft_atoi(test5));
}
