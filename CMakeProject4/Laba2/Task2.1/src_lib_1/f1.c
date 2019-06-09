#include <stdio.h>
#include <func.h>

double g(double xa, double ya, double xb, double yb, double xd, double yd)
{
	return (xd - xa) * (yb - ya) - (yd - ya) * (xb - xa);
}

_Bool Check(double xa, double ya, double xb, double yb, double xc, double yc, double xd, double yd)
{
	return g(xa, ya, xb, yb, xc, yc) * g(xa, ya, xb, yb, xd, yd) >= 0;
}

_Bool IsInArea(double xd, double yd)
{
	double xa = 0, ya = 0, xb = 1, yb = 0, xc = 0, yc = 1;
	if (Check(xa, ya, xb, yb, xc, yc, xd, yd) && Check(xb, yb, xc, yc, xa, ya, xd, yd) &&
		Check(xc, yc, xa, ya, xb, yb, xd, yd) != 0)
		return 1;
	else if (xd < 0 && xd >= -1 && yd < 0 && yd >= -1)
		return 1;
	else
		return 0;
}

