#include <stdio.h>
#include <stdlib.h>
#include <func.h>

int main(void)
{
	double x, y;
	printf("1. Task1\r\n");
	printf("2. Task2\r\n");
	printf("3. Exit\n\r");
	int a = _getch();
	switch (a)
	{
	case '1':
		system("cls");
		printf("Task1\n\r");
		printf("Enter x:");
		scanf_s("%lf", &x);
		printf("Enter y:");
		scanf_s("%lf", &y);
		printf("1 if in area, 0 if not\n\r");
		printf("%d\n\r", IsInArea(x, y));
		break;
	case '2':
		system("cls");
		printf("TASK 2\n\r");
		printf("Enter x:");
		scanf_s("%lf", &x);
		printf("y=%f\n", f(x));
		break;
	case '3':
		exit(0);
		break;
	default:
		printf("Invalid parameter");
		break;
	}
	system("pause");
	return 0;
}