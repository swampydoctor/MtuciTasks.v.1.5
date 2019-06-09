#include <math.h>

float f(float x)
{
	return 1 - pow(sin(2 * x), 2) / 4 + cos(2 * x);
}