#include <stdio.h>

int main() 
{
    int array[100], n, i, sum = 0;

    
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i]; 
    }

    
    printf("\nThe sum of all elements in the array is: %d\n", sum);

    return 0;
}