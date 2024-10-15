ex00:
#include <stdio.h>
int main(void)
{
    char *src = "Hello, World!";
    char *dup = ft_strdup(src);
    
    printf("Original: %s\n", src);
    printf("Duplicate: %s\n", dup);
    
    free(dup);
    return 0;
}

ex01:
#include <stdio.h>
int main(void)
{
	int min = 3;
	int max = 8;
	int *range = ft_range(min, max);
    
    
	int i = 0;
	printf("Range from %d to %d: ", min, max);
	while (i < max - min)
	{
	    printf("%d ", range[i]);
	    i++;
	}
	printf("\n");
	free(range);

    return 0;
}

Ex02:
#include <stdio.h>
int main(void)
{
	int *range;
    	int size = ft_ultimate_range(&range, 3, 8);
	printf("Range size: %d\n", size);
        printf("Range: ");
        int i = 0;
        while (i < size)
        {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
        free(range);
}

ex03:

#include <stdio.h>
int main(void)
{
	char *strs[] = {"Hello", "HIVE", "42"};
	char *sep = ", ";
	char *result = ft_strjoin(3, strs, sep);
	
	printf("Result: %s\n", result);
        free(result);
}
