#include <func.h>

void sortHeapArray()
{
	int n;
	int *arr;
	printf("Input n:\n\r");
	scanf_s("%d", &n);
	arr = (int *)malloc(n * sizeof(int));
	printf("Input array members:\n\r");
	readArray(arr, n);
	qs(arr, 0,n-1);
	printf("Your sorted array:\n\r");
	writeArray(arr, n);
	printf("\n\r");
	free(arr);
}