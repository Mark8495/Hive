Ex00:
#include <stdio.h>
int main(void)
{
	char dest[100];
	
	char *src1 = "Hello, World!";
        printf("Test Case 1: ");
        dest = "Yo Man"
        printf("Expected:%s, Got: %s\n", src1, dest);
        ft_strcpy(dest, src1);
    	printf("Expected:%s, Got: %s\n", src1, dest);
    	
    	char *src2 = "8927359871asdkfajk!";
        printf("Test Case 1: ");
        ft_strcpy(dest, src2);
    	printf("Expected: %s, Got: %s\n", src2, dest);
}

Ex01:
#include <stdio.h>
int main(void)
{
	char	dest[100];
	ft_strncpy(dest, "Hello", 3);
    	printf("Test 1: %s\n", dest);
    	ft_strncpy(dest, "ajdfkajdsflkjalkdsj", 5);
    	printf("Test 1: %s\n", dest);

}

Ex02:
#include <stdio.h>
int main(void)
{
	char input1[] = "HelloWorld";
    	int result1 = ft_str_is_alpha(input1);
    	printf("Test case: %s\n", result1 == 1 ? "Success" : "Failure");
    	char input2[] = "123456789";
    	int result2 = ft_str_is_alpha(input2);
    	printf("Test case: %s\n", result2 == 1 ? "Success" : "Failure");
    	
}

Ex03:
#include <stdio.h>
int main(void)
{
	char input1[] = "HelloWorld";
    	int result1 = ft_str_is_numeric(input1);
    	printf("Test case: %s\n", result1 == 1 ? "Success" : "Failure");
    	char input2[] = "123456789";
    	int result2 = ft_str_is_numeric(input2);
    	printf("Test case: %s\n", result2 == 1 ? "Success" : "Failure");
}

Ex04:
#include <stdio.h>
int main(void)
{
	char input1[] = "helloworld";
    	int result1 = ft_str_is_lowercase(input1);
    	printf("Test case: %s\n", result1 == 1 ? "Success" : "Failure");
    	char input2[] = "HelloWorld";
    	int result2 = ft_str_is_lowercase(input2);
    	printf("Test case: %s\n", result2 == 1 ? "Success" : "Failure");
}

Ex05:
#include <stdio.h>
int main(void)
{
	char input1[] = "helloworld";
    	int result1 = ft_str_is_uppercase(input1);
    	printf("Test case: %s\n", result1 == 1 ? "Success" : "Failure");
    	char input2[] = "HELLOWORLD";
    	int result2 = ft_str_is_uppercase(input2);
    	printf("Test case: %s\n", result2 == 1 ? "Success" : "Failure");
}

Ex06:
#include <stdio.h>
int main(void)
{
	char input1[] = "helloworld";
    	int result1 = ft_str_is_printable(input1);
    	printf("Test case: %s\n", result1 == 1 ? "Success" : "Failure");
    	char input2[] = "HELLO€WORLD";
    	int result2 = ft_str_is_printable(input2);
    	printf("Test case: %s\n", result2 == 1 ? "Success" : "Failure");
}

Ex07:
#include <stdio.h>
int main(void)
{
	 char test1[] = "hello world";
	 printf("Test 1 before: %s", test1);
	 printf("\n");
	 printf("Test 1 before: %s", ft_strupcase(test1));
}
}
Ex08:
#include <stdio.h>
int main(void)
{
	 char test1[] = "hello world";
	 printf("Test 1 before: %s", test1);
	 printf("\n");
	 printf("Test 1 before: %s", ft_strlowcase(test1));
}

Ex09:
#include <stdio.h>
int main(void)
{
	 char test1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	 printf("Test 1 before: %s", test1);
	 printf("\n");
	 printf("Test 1 before: %s", ft_strcapitalize(test1));
	 return 0;
}
