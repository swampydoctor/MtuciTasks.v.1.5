#include <stdio.h>
#include <math.h>

float f(float a)
{
	return 1 - pow(sin(2 * a), 2) / 4 + cos(2 * a);
}

void main()
{
	float x = 5;
		printf("f(x)=%f\n", f(x));
		scanf("%f", &x);
	printf("f(x)=%f\n", f(x));
		system("pause");
}