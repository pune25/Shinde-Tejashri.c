#include <stdio.h>

int main() 
{
    int start, end, i;


    printf("Enter the starting number of the range: ");
    scanf("%d", &start);

    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    
    printf("\nEven numbers from %d to %d are:\n", start, end);
    for (i = start; i <= end; i++)
	 {
        if (i % 2 == 0) 
		{
            printf("%d ", i);
        }
    }


    printf("\n\nOdd numbers from %d to %d are:\n", start, end);
    for (i = start; i <= end; i++) 
	{
        if (i % 2 != 0)
		 {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
