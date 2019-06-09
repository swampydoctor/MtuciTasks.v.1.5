#include <stdio.h>
#include <math.h>

void main()
{
	float a=5;
	printf("f(x)=%f\n", (1 - pow(sin(2*a),2) / 4 + cos(2 * a)));
	scanf("%f", &a);
	printf("f(x)=%f\n", 1 - pow(sin(2 * a),2) / 4 + cos(2 * a));
	system("pause");
}