#include <func.h>

void writeArray(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", *(arr + i));
	}
}