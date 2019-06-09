#include <math.h>

float x=2;
float res;
void f(void)
{
	res= 1 - pow(sin(2 * x), 2) / 4 + cos(2 * x);
}