#include <stdio.h>

int main() 
{
    int start, end, sum = 0;

    
    printf("Enter the starting number of the range: ");
    scanf("%d", &start);

    printf("Enter the ending number of the range: ");
    scanf("%d", &end);

    
    for (int i = start; i <= end; i += 2) {
        sum += i;
    }

    
    printf("Sum of alternate numbers from %d to %d = %d\n", start, end, sum);

    return 0;
}
