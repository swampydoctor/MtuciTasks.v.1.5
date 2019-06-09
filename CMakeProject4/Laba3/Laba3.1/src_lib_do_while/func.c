#include <stdio.h>
#include <f.h>
#include <math.h>

double summ(n)
{
	int i = 0;
	double a = 0;
	do
	{
		a += pow(-1, i)*((i + 1) / (pow(3, i) + pow(2, i)));
		++i;
	} while (i <= n - 1);
	return a;
}

double summ2(double eps)
{
	double a = pow(-1, 0)*((0 + 1) / (pow(3, 0) + pow(2, 0)));
	double s = a;
	int i = 1;
	if (fabs(s) <= eps)
		return s;
	do
	{

		a = pow(-1, i)*((i + 1) / (pow(3, i) + pow(2, i)));
		s = s + a;
		++i;
	} while (fabs(a) > eps);
	return s;
}

void print(int n, int k)
{
	int q = 1;
	int i = 0;
	do
	{
		if (q == k)
		{
			q = 1;
			++i;
			continue;
		}
		else
		{
			double a = pow(-1, i)*((i + 1) / (pow(3, i) + pow(2, i)));
			printf("%.5lf ", a);
		}
		++q;
		++i;
	} while (i <= n - 1);
}

int findFirstElement(double eps)
{
	int i = 0;
	do
	{
		double a = pow(-1, i)*((i + 1) / (pow(3, i) + pow(2, i)));
		if (fabs(a) <= eps)
		{
			break;
		}
		++i;
	} while (1);
	return i;
}

int findFirstNegativeElement(double eps)
{
	int i = 0;
	do
	{
		double a = pow(-1, i)*((i + 1) / (pow(3, i) + pow(2, i)));
		if (fabs(a) <= eps && a < 0)
		{
			return i;
		}
		++i;
	} while (1);
}