#include <stdio.h>
#include <math.h>
#include <func.h>

double f(double x)
{
	if (x <= 9)
		return cos(2 * x) + 9;
	else 
	return -cos(x) / (x - 9);
}