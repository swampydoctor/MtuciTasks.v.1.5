#include <stdio.h>
#include <math.h>

float x=5;
float res;

void f(void)
{
	res = 1 - pow(sin(2 * x), 2) / 4 + cos(2 * x);
}

void main()
{
	f();
	printf("f(x)=%f\n", res);
	scanf("%f", &x);
	f();
	printf("f(x)=%f\n", res);
	system("pause");
}