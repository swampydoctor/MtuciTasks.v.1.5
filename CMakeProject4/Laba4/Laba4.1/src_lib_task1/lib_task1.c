#include <f.h>

void f(const double *a, double *result)
{
	*result = (1 - (pow(sin(2 * *a), 2) / 4) + cos(2 * *a));
}