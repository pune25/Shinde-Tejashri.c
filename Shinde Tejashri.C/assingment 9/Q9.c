#include <stdio.h>
void  sortedarray(int*,int);
void main() {
	int n,i;
	int arr[100];

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	printf("Enter %d numbers:\n", n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sortedarray(arr,n);
}
void  sortedarray(int* arr,int n) {
	int i,j,temp;
	for( i = 0; i < n-1; i++) {
		for( j = 0; j < n - i - 1; j++) {
			if(arr[j] > arr[j + 1]) {

				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Sorted array in ascending order:\n");
	for( i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}