#include <stdio.h>

extern float x;
extern float res;

void main()
{
	f();
	printf("f(x)=%f\n", res);
	scanf("%f", &x);
	f();
	printf("f(x)=%f\n", res);
	system("pause");
}