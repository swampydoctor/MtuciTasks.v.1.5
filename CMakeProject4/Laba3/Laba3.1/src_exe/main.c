#include <stdio.h>
#include <stdlib.h>
#include <f.h>

int main(void)
{
	double n, eps, k;
	printf("1. Task1\r\n");
	printf("2. Task2\r\n");
	printf("3. Task3\r\n");
	printf("4. Task4\r\n");
	printf("5. Task5\r\n");
	printf("6. Exit\r\n");
	int a = _getch();
	switch (a)
	{
	case '1':
		system("cls");
		printf("Task1\n\r");
		printf("Enter n:");
		scanf_s("%lf", &n);
		printf("summ=%.5lf\n\r", summ(n));
		break;
	case '2':
		system("cls");
		printf("TASK 2\n\r");
		printf("Enter eps:");
		scanf_s("%lf", &eps);
		printf("summ=%.5lf\n\r", summ2(eps));
		break;
	case '3':
		system("cls");
		printf("TASK 3\n\r");
		printf("Enter n:");
		scanf_s("%lf", &n);
		printf("Enter k:");
		scanf_s("%lf", &k);
		print(n, k);
		printf("\n\r");
		break;
	case '4':
		system("cls");
		printf("TASK 4\n\r");
		printf("Enter eps:");
		scanf_s("%lf", &eps);
		printf("i=%d\n\r", findFirstElement(eps));
		break;
	case '5':
		system("cls");
		printf("TASK 5\n\r");
		printf("Enter eps:");
		scanf_s("%lf", &eps);
		printf("i=%d\n\r", findFirstNegativeElement(eps));
		break;
	case '6':
		exit(0);
		break;
	default:
		return ("Invalid parameter");
		break;
	}
	system("pause");
	return 0;
}