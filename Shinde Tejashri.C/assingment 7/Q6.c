#include <stdio.h>

int main() 
{
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  

    
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
     printf("Alternate elements of the array are:\n");
    for (i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}