#include <stdio.h>
#include<string.h>
void swapPositions(int arr[], int x, int y) {
    int temp;
    x = x - 1;
    y = y - 1;

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

int main() {
    int arr[] = {11, 23, 30, 4, 21, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3, y = 5;
    swapPositions(arr, x, y);

    printf("Array after swapping %dth and %dth positions:\n", x, y);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}