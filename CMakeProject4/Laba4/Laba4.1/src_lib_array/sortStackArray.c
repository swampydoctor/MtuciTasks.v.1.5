#include <f.h>

void sortStackArray()
{
	int n = 6;
	int pArr[6];
	n = sizeof(pArr) / sizeof(int);
	printf("n=%d\n", n);
	readArray(pArr, n);
	qs(pArr, 0, n-1);
	writeArray(pArr, n);
	printf("\n\r");
}