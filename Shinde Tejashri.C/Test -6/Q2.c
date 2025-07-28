#include <stdio.h>
int main() {
    int arr[100], n;
    int first_max, second_max;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
}
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1]) {
        first_max = arr[0];
        second_max = arr[1];
    } else {
        first_max = arr[1];
        second_max = arr[0];
    }

    for(int i = 2; i < n; i++) {
        if(arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        } else if(arr[i] > second_max && arr[i] != first_max) {
            second_max = arr[i];
        }
    }

    printf("The largest number is: %d\n", first_max);
    printf("The second largest number is: %d\n", second_max);

    return 0;
}
