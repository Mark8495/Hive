//Ex00:
#include <stdio.h>
int main(void) {
  int a;
  a = ft_strcmp("Hello", "Hello");
  printf("%i\n", a);
  a = ft_strcmp("Hella", "Hello");
  printf("%i\n", a);
  a = ft_strcmp("Hello", "Hella");
  printf("%i\n", a);
}

//Ex01:
int main(void) {
  char *s1 = "abc";
  char *s2 = "abc";
  char *s3 = "abcd";
  char *s4 = "ab";

  printf("Test 1: ft_strncmp(\"%s\", \"%s\", 3) = %d\n", s1, s2,
         ft_strncmp(s1, s2, 3));
  printf("Test 2: ft_strncmp(\"%s\", \"%s\", 4) = %d\n", s1, s3,
         ft_strncmp(s1, s3, 4));
  printf("Test 3: ft_strncmp(\"%s\", \"%s\", 2) = %d\n", s1, s4,
         ft_strncmp(s1, s4, 2));
  printf("Test 4: ft_strncmp(\"%s\", \"%s\", 1) = %d\n", s1, s4,
         ft_strncmp(s1, s4, 1));
  return 0;
}

//Ex02:
#include <stdio.h>

int main() {
  char dest1[100] = "Hello ";
  char src1[100] = "world!";
  char *result1 = ft_strcat(dest1, src1);
  printf("Test 1: %s\n", result1); // Expected output: "Hello world!"
  char dest2[100] = "This is a ";
  char src2[100] = "test string.";
  char *result2 = ft_strcat(dest2, src2);
  printf("Test 2: %s\n", result2); // Expected output: "This is a test string."
  return 0;
}

//Ex03
#include <stdio.h>
int main() {
  char dest1[100] = "Hello";
  char src1[] = " world!";
  char dest2[100] = "Hello";
  char src2[] = " world!";
  char dest3[100] = "Hello";
  char src3[] = " world!";
  printf("Test 1: %s\n", ft_strncat(dest1, src1, 5));
  printf("Test 2: %s\n", ft_strncat(dest2, src2, 6));
  printf("Test 3: %s\n", ft_strncat(dest3, src3, 100));
  return 0;
}

//Ex04
