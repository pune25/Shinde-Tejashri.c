#include <stdio.h>

int main() 
{
    int array[100], n, i, search, found = 0;

    
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("Enter the number to search in the array: ");
    scanf("%d", &search);

    
    for (i = 0; i < n; i++) 
	{
        if (array[i] == search) 
		{
            printf("\n? Number %d found at position %d (index %d).\n", search, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found) 
	{
        printf("\n? Number %d not found in the array.\n", search);
    }

    
    printf("\nArray elements are: ");
    for (i = 0; i < n; i++)
	 {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}