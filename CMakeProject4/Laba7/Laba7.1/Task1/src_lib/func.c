#include <func.h> 

void incrementHeapVariable(void)
{
	printf("Input x:\n\r");
	int *x = (int *)malloc(sizeof(int));
	scanf_s("%d", x);
	printf("Address  Value\n\r");
	printf("%x %d\n", x, *x);
	*x += 1;
	printf("%x %d\n", x, *x);
	free(x);
}
