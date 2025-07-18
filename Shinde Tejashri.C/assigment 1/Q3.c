#include <stdio.h>

int main()
 {
    int num, original, reversed = 0;

    
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    
    if (num < 100 || num > 999) {
        printf("Error: Please enter a valid 3-digit number.\n");
        return 1;
    }

    original = num;

    
    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    reversed = units * 100 + tens * 10 + hundreds;

    
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }
    
	}

