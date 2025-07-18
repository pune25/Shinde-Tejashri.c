#include <stdio.h>

int main() 
{
    int array[100], n, i;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("\nEven numbers in the array are: ");
    for (i = 0; i < n; i++) 
	{
        if (array[i] % 2 == 0) 
		{
            printf("%d ", array[i]);
        }
    }

    
    printf("\nOdd numbers in the array are: ");
    for (i = 0; i < n; i++) 
	{
        if (array[i] % 2 != 0) 
		{
            printf("%d ", array[i]);
        }
    }

    printf("\n");

    return 0;
}