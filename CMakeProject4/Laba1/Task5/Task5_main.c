#include <stdio.h>
float f(float x);
void main()
{
	float x = 2;
	printf("f(x)=%f\n", f(x));
	scanf("%f", &x);
	printf("f(x)=%f\n", f(x));
	system("pause");
}