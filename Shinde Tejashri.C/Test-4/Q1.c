#include <stdio.h>

int main() 
{
    int start = 10;
    int end = 15;

    printf("Factors of numbers from %d to %d:\n", start, end);

    for (int num = start; num <= end; num++) 
	{
        printf("Factors of %d: ", num);
        for (int i = 1; i <= num; i++)
		 {
            if (num % i == 0)
			 {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}