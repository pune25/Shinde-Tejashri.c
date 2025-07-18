void storeArray(int*,int);
void main()
{
	int arr[10];
	int brr[15];
	int crr[7];
	
	printf("\nEnter array 1");
	storeArray(arr,10);
	printf("\nEnter array 2");
	storeArray(brr,15);
	printf("\nenter array 3");
	storeArray(crr,7);
 
 displayArray(arr,10);
 displayArray(arr,15);
 displayArray(arr,7);
}
 
 void storeArray(int* ptr,int size)
 {
 	for(int i=0;i<size;i++)
 	scanf("%d",&ptr[i]);
 }
 
 void displayArray(int* ptr,int size)
 {
 	printf("\n[");
 	
 	for(int i=0;i<size;i++)
 	printf("%d",ptr[i]);
 	
 	printf("]");
 }